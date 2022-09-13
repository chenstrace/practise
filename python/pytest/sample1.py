# content of test_sample.py
def inc(x):
    return x + 1


def test_answer1():
    assert inc(4) == 5


def test_answer2():
    assert inc(3) == 4



def test_answer3():
    assert inc(100) == 102