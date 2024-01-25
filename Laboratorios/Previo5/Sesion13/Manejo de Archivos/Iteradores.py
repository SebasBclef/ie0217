##definiendo una lista

my_list=[4,7,0]

iterator= iter(my_list)

print(next(iterator))
print(next(iterator))
print(next(iterator))

for element in my_list:
    print(element)