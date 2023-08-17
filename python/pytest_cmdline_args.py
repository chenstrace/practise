import pytest

def pytest_configure(config):
    config.addinivalue_line("markers", "my_marker: my custom marker")

def pytest_addoption(parser):
    parser.addoption("--myoption", action="store", default="default_value", help="My custom option")

@pytest.fixture
def my_custom_option(request):
    return request.config.getoption("--myoption")

@pytest.mark.my_marker
def test_using_custom_option(my_custom_option):
    print(f"My custom option value: {my_custom_option}")
    # 在这里执行测试逻辑

    assert my_custom_option == 'abcd'
