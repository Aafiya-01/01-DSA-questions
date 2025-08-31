x, y, z = "hello world", "abc", "cbf"
print(x)
print(y)
print(z)

# global variables

x = "awesome"

def myfunc():
  x = "fantastic"
  print("Python is " + x)

myfunc()

print("Python is " + x)

