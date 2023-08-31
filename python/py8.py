#Area of a triangle
import math

a=int(input("Enter side 1 of triangle: "))
b=int(input("Enter side 2 of triangle: "))
c=int(input("Enter side 3 of triangle: "))
s=(a+b+c)/2
area=math.sqrt((s*(s-a)*(s-b)*(s-c)))
print("Area of the triangle is: ",area,"sq.units")