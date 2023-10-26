#Semester marks

def getmarks():
    while True:
        mark=int(input("Enter a mark: "))
        if 0<=mark<=100:
            return mark
        else:
            print("Invalid marks. Enter between 0-100")
        

semesters=int(input("Enter number of semesters:"))
subjects=int(input("Enter number of subjects:"))
max_marks=[]

for sem in range (1,semesters+1):
    print("Semester-",sem," :")
    sem_marks=[]
    for sub in range(1,subjects+1):
        print("Subject-",sub)
        mark=getmarks()
        sem_marks.append(mark)
    max_mark=max(sem_marks)
    max_marks.append(max_mark)
    print("Max mark in Semester-",sem," : ",max_mark)
print("Max mark in each Semester-"," : ",max_marks)
    
    
