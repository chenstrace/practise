import os

# https://stackoverflow.com/questions/3430372/how-do-i-get-the-full-path-of-the-current-files-directory

a = os.path.dirname(os.path.abspath(__file__))
print(a)


b = os.path.abspath(os.getcwd())
print(b)
