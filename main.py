import math
print("Dankov Artem,IS-01,26V")
try:
    x = float(input("Введіть абсцису точки: "))
    y = float(input("Введіть ординату точки: "))
except:
    print("Wrong input")
r = 2  # радіус описаного кола
a = 0  # абсциса точки перетину діагоналей
b = 0  # ордината точки перетину діагоналей
circle = False
square = False  # логічні оператори для перевірки належності точки колу чи квадрату
st = (r*2)/math.sqrt(2)  # знаходимо сторону квадрата
d = st*math.sqrt(2)  # знаходимо діагональ квадрату
if x*x+y*y <= r*r:
    circle = True  # для перевірки належності точки заданому колу
if abs(x-a) + abs(y-b) <= d/2:
    square = True  # для перевірки належності точки заданому колу
if (circle is True) & (square is True):
    if(x <= 0) & (y >= 0):
        print("yes")
    elif(x >= 0) & (y <= 0):
        print("yes")
    else:
        print("no")
elif (circle is True) & (square is False):
    if(x <= 0) & (y <= 0):
        print("yes")
    elif (circle is True) & (square is False) & (x >= 0) & (y >= 0):
        print("yes")
    else:
        print("no")
else:
    print("no")
