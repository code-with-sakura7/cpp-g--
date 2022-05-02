n = int(input())
out = []
app = ""
for i in range(1, n+1):
    if (i % 3 == 0) and (i % 5 == 0):
        app = "FizzBuzz"
    elif (i % 3 == 0):
        app = "Fizz"
    elif (i % 5 == 0):
        app = "Buzz"
    else:
        app = str(i)
    out.append(app)

print(out)