#Fibonacci series

n=int(input("How many terms? "))
n1,n2=0,1
count=0

if(n<=0):
    print("Enter a positive number")
elif(n==1):
    print("Fibonacci series: ")
    print(n1)
else:
    print("Fibonacci series :")
    while count<n:
        print(n1)
        temp=n1+n2
        n1=n2
        n2=temp
        count +=1
