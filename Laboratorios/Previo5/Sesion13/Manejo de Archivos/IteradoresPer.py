class PowTwo:
    def __init__(self, limit=0):
        self.limit = limit

    def __iter__(self):
        self.n = 0
        return self

    def __next__(self):
        if self.n <= self.limit:
            result = 2 ** self.n
            self.n += 1
            return result
        else:
            raise StopIteration

# Uso del iterador
numbers = PowTwo(3)

i = iter(numbers)

try:
    while True:
        print(next(i))
except StopIteration:
    pass
