#Maximum element of a list

list1 = []
elems = int(input("Enter number of elements: "))
print("Enter the elements: ")
for i in range(0,elems):
    num = int(input())
    list1.append(num)
print("List :",list1)
print("The largest element is: ", max(list1))
