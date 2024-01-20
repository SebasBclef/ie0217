def outer_function():
    num=20

    def inner_function():
        global num
        num=25

    print("Before calling inner_function():", num)
    inner_function()
    print("After calling innner_function():",num)

outer_function()
print("Outside both functions:",num)