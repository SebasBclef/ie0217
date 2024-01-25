##Abriendo el file
file1=open("test.txt","r")

#leer el file
read_content = file1.read()
print(read_content)

#cerrar el file
file1.close()

##Otra manera de hacerlo##

try:
    file1=open("test.txt","r")
    read_content= file1.read()
    print(read_content)
finally:
    file1.close() ##cerrando el file

##otra manera de hacerlo#
    
with open ("test.txt","r") as file1:
    read_content=file1.read()
    print(read_content)

with open ("test2.txt","w") as file2:
    #write contents to the test2.txt file
     file2.write("Programming is fun. :D")

with open ("test2.txt","r") as file2:
    read_content=file2.read()
    print(read_content)