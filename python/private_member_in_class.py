class MyClass:
    def __init__(self):
        self.public_attribute = "This is a public attribute"
        self.__private_attribute = "This is a private attribute"

    def public_method(self):
        print("This is a public method")

    def __private_method(self):
        print("This is a private method")


my_object = MyClass()

# We can access the public attribute and method from outside the class
print(my_object.public_attribute)
my_object.public_method()

# But we cannot access the private attribute or method
try:
    print(my_object.__private_attribute)
except Exception as e:
    print(e)


try:
    my_object.__private_method()
except Exception as e:
    print(e)


