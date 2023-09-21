#Number of letters and digits from a string

d=l=0
s = input("Enter a string: ")
for x in s:
    if x.isdigit():
        d+=1
    elif x.isalpha():
        l+=1
    else:
        pass
print("Letters: ",l)
print("Digits: ",d)