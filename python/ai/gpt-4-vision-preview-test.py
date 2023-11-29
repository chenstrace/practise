from openai import OpenAI


def ask_ai(image_url, api_key="1234", api_base="http://127.0.0.1:8000/v1"):
    client = OpenAI(api_key=api_key, base_url=api_base)

    response = client.chat.completions.create(
        model="gpt-4-vision-preview",
        messages=[
            {
                "role": "user",
                "content": [
                    {"type": "text", "text": "What’s in this image?"},
                    {
                        "type": "image_url",
                        "image_url": {
                            "url": image_url,
                        },
                    },
                ],
            }
        ],
        max_tokens=300,
    )
    print("AI answer:", response.choices[0].message.content, flush=True)


if __name__ == '__main__':
    image_url = "https://upload.wikimedia.org/wikipedia/commons/thumb/d/dd/Gfp-wisconsin-madison-the-nature-boardwalk.jpg/2560px-Gfp-wisconsin-madison-the-nature-boardwalk.jpg"
    ask_ai(image_url=image_url)
