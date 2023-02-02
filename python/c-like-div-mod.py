def c_like_mod(a, b):
    return abs(a) % abs(b)*(1, -1)[a < 0]


def c_like_div(a, b):
    return abs(a) // abs(b)*(1, -1)[a < 0]


if __name__ == '__main__':
    assert c_like_mod(-9, 4) == -1
    assert c_like_div(-9, 4) == -2
