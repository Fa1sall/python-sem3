#Solving quadratic equation

import cmath

a=int(input("Enter number a:"))
b=int(input("Enter number b:"))
c=int(input("Enter number c:"))
    
d = (b**2)-(4*a*c)

sol1=(-b-cmath.sqrt(d))/(2*a)
sol2=(-b+cmath.sqrt(d))/(2*a)
print('THe solution are ',sol1,", ",sol2)