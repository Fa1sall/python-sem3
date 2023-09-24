#Semester marks

max=sub=0
for i in range (1,4):
    print("Enter Sem -",i," marks:")
    print("---------------------")
    for j in range(1,4):
        print("Enter Subject -",j," mark:")
        x = int(input())
        if(x>100 or x<0):
            print("You have entered invalid marks")
            print("Enter Subject -",j," mark:")
            x = int(input())
            if(x>max):
                max=x
                sub=i
        else:
            if(x>max):
                max=x
                sub=i
    print("Maximum marks scored in Sem -",i,":")
    print("Subject - ",sub,": ",max)

