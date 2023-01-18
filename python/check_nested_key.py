def check_nested_key(data, keys):
    if not keys:
        return False
    if len(keys) == 1:
        return keys[0] in data
    key, *rest = keys
    if key not in data:
        return False
    return check_nested_key(data[key], rest)


def check(data, keys, i):
    if len(keys) == 0:
        return False
    if i >= len(keys):
        return True

    if keys[i] not in data:
        return False


    return check(data[keys[i]],keys,i+1)

d = {'level1': {'level2': {'level3': 'value'}}}
keys = []
print(check(d, keys,0))  # Output: True



d = {'level1': {'level2': {'level3': 'value'}}}
keys = ['level1']
print(check(d, keys,0))  # Output: True

d = {'level1': {'level2': {'level3': 'value'}}}
keys = ['level1','level2']
print(check(d, keys,0))  # Output: True

d = {'level1': {'level2': {'level3': 'value'}}}
keys = ['level1', 'level2', 'level3']
print(check(d, keys,0))  # Output: True



d = {'level1': {'level2': {'level3': 'value'}}}
keys = ['level1', 'level2', 'level3','level4']
print(check(d, keys,0))  # Output: False 

d = {'level1': {'level2': {'level3': 'value'}}}
keys = ['level1', 'level2', 'level4']
print(check(d, keys,0))  # Output: False
