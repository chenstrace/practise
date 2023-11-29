from typing import List


def fix_array_and_ptr(td_array, ptr):
    while ptr and td_array:
        row_index = len(ptr) - 1
        col_index = ptr[row_index]

        if col_index >= len(td_array[row_index]):
            ptr.pop()
            if ptr:
                ptr[-1] += 1
            td_array.pop(row_index)
        else:
            break

    return td_array, ptr


def click(td_array, ptr: List[int], cur_row, already_add, max_depth=3):
    while True:
        if len(td_array) == 0:
            print("end1")
            break
        if ptr[0] == len(td_array[0]):
            print("end2")
            break

        if cur_row >= max_depth:
            print("max depth")
            ptr[cur_row - 1] += 1
            cur_row = 0
            td_array = td_array[:max_depth]
            ptr = ptr[:max_depth]
            fix_array_and_ptr(td_array, ptr)
        else:
            col = ptr[cur_row]

            if col >= len(td_array[cur_row]):
                # 这一行都点完了
                td_array = td_array[:cur_row]
                ptr[cur_row - 1] += 1
                ptr = ptr[:cur_row]
                cur_row = 0
                fix_array_and_ptr(td_array, ptr)
            else:
                node = td_array[cur_row][col]
                print("click", node)  # 这里执行点击

                is_page_changed = True if node in is_page_changed_after_click else False
                #
                if is_page_changed:
                    # 页面变了，下一个要点击的是下一级结点中的第一个
                    cur_row += 1

                    if node not in already_add:
                        already_add.add(node)
                        new_elems_after_click = new_elements_after_click[
                            node] if node in new_elements_after_click else []
                        td_array.append(new_elems_after_click)
                        ptr.append(0)
                else:
                    ptr[cur_row] += 1


new_elements_after_click = {
    "a1": ["b1", "b2"],
    'b1': ["c1", "c2", "c3"],
    'c1': ["d1", "d2"],
    'c2': ["d3", "d4"],
}

is_page_changed_after_click = {'a1', 'b1', 'c1', "c2"}


def main():
    td_array = [["a1", "a2", "a3", "a4"]]
    ptr = [0]
    already_add = set()
    click(td_array, ptr, 0, already_add, max_depth=3)


if __name__ == "__main__":
    main()
