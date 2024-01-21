lenguajes=["Python", "Swift","C++"]

##iterando la lista

for lenguaje in lenguajes:
    print(lenguajes)
print("C" in lenguajes)
print("Python" in lenguajes)
##comprension de listas

numbers=[number*number for number in range (1,6)]
print(numbers)