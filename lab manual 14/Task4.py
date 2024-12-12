def find_length(num):
    count=0
    while(num!=0):
        num=int(num/10)
        count+=1
    return count    
num=int(input("Enter the length of number: "))
result=find_length(num)
print(f"The length of the {num} is: {result}")
