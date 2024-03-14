import os
import re
import sys

from PIL import ImageDraw, ImageFont, Image


def measure_text(text, font):
    image = Image.new("RGB", (300, 300))
    draw = ImageDraw.Draw(image)

    draw.text((20, 50), text, font=font)
    bbox = draw.textbbox((20, 50), text, font=font)
    draw.rectangle(bbox, outline="red")
    return bbox[2] - bbox[0], bbox[3] - bbox[1]


def add_text_watermark(input_image_path, output_image_path, text1, text2, font1, font2, font_color):
    image = Image.open(input_image_path)
    image_height = image.height

    text1_width, text1_height = measure_text(text1, font1)
    text2_width, text2_height = measure_text(text2, font2)

    x1 = x2 = 30
    y2 = image_height - text2_height - 30
    y1 = y2 - text1_height - 30

    p1 = (x1, y1)
    p2 = (x2, y2)

    draw1 = ImageDraw.Draw(image)
    draw1.text(p1, text1, font=font1, fill=font_color)

    draw2 = ImageDraw.Draw(image)
    draw2.text(p2, text2, font=font2, fill=font_color)

    image.save(output_image_path, "png")


def add_image_watermark(input_image_path, output_image_path, watermark_image_path, position=(0, 0), transparency=90):
    # 打开原始图片和水印图片
    original_image = Image.open(input_image_path)
    watermark = Image.open(watermark_image_path)

    # 设置水印的透明度
    watermark = watermark.convert("RGBA")
    watermark_with_transparency = Image.new("RGBA", watermark.size)
    for x in range(watermark.width):
        for y in range(watermark.height):
            r, g, b, a = watermark.getpixel((x, y))
            watermark_with_transparency.putpixel((x, y), (r, g, b, int(a * transparency / 100)))

    # 将水印粘贴到原始图片上
    original_image.paste(watermark_with_transparency, position, watermark_with_transparency)

    # 保存带有水印的图片
    original_image.save(output_image_path)


def modify_filename(filename):
    # 分离出文件名和扩展名
    base, extension = os.path.splitext(filename)

    # 添加'-ok'到文件名，并重新添加扩展名
    new_filename = base + '-ok' + extension

    return new_filename


def process_single_image(org_image_directory, org_image_name, org_price, current_price):
    org_image_path = os.path.join(org_image_directory, org_image_name)
    font_path = "/System/Library/Fonts/PingFang.ttc"
    background_image_path = "bg.png"
    font1_size = 30
    font1 = ImageFont.truetype(font_path, font1_size)
    font2_size = 50
    font2 = ImageFont.truetype(font_path, font2_size)
    font_color = (255, 255, 255)

    add_image_watermark(org_image_path, 'temp.png', background_image_path)

    text1 = "原价¥" + str(org_price)
    text2 = "¥" + str(current_price)
    out_image_name = modify_filename(org_image_name)
    out_image_path = os.path.join(org_image_directory, out_image_name)

    add_text_watermark("temp.png", out_image_path, text1, text2, font1, font2, font_color)


def process_image_files(directory):
    pattern = re.compile(r'.*_(\d+(\.\d+)?)_(\d+(\.\d+)?)\.(jpg|png|jpeg)$', re.IGNORECASE)

    for filename in os.listdir(directory):
        match = pattern.match(filename)
        if match:
            num1, _, num2, _, _ = match.groups()
            print(f'{filename}, 原价: {num1}, 现价: {num2}')
            process_single_image(directory, filename, num1, num2)
        else:
            print(f'{filename}, 不满足格式要求')


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("参数错误，使用方法: python watermark.py 目录路径")
        sys.exit(1)

    directory = sys.argv[1]

    if not os.path.isdir(directory):
        print("错误的目录")
        sys.exit(1)

    process_image_files(directory)
    print("处理完成")
