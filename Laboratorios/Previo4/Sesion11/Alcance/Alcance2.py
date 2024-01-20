c=1 ##variable global

def add():
    print(c)
add()

def add2():
    global c
    c=c+2 #aumentando c por 2
    print(c)
add2()