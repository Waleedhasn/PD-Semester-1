def Make_Rug(height, width,proc):
    for i in range (0,height,1):
        for j in range(0,width,1):
            print(proc, end = ' ')
        print (end = '\n')

height = int(input("Enter height: "))
width = int(input("Enter width: "))
choice = input("Do you want to enter a chracter(Yes/No): ")
if choice == "Yes" or choice == "yes":
        proc = (input("Enter character: "))   
else:
    proc = '#'

Make_Rug(height,width,proc)