def Oddish_or_Evenish(num):
    sum=0
    while(num!=0):
        remainder=num%10
        num=num//10
        sum=remainder+sum
    return sum    
num=int(input("Enter the number: "))
if(Oddish_or_Evenish(num)%2==0):
    print("Evenish")  
else:
    print("Oddish")     
