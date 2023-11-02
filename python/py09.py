def fillzero_print(a,b,n):
    for i in range(a,b+1):
        num_str=str(i)
        num_len=len(num_str)
        num_zeroes=n-num_len
        if num_zeroes>0:
            num_str = '0' * num_zeroes + num_str
        print(num_str,end=',')
a=int(input("Enter the start value (a):"))
b=int(input("Enter the end value (b):"))
n=int(input("Enter the length (n):"))
fillzero_print(a,b,n)
