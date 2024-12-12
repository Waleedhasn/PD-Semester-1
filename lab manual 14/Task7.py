
def likeordislike(n):

    state= "Nothing"
    for i in range(0, n, 1):
        b=input("Enter like or dislike: ")
        if b=="like":
            if state=="Like":
                state="Nothing"
            else:
                state="Like"

        elif b=="dislike":
            if state=="Dislike":
                state="Nothing"
            else:
                state="Dislike"
        else:
            print("Invalid input. Please enter like or dislike.")
    return state
n = int(input("Enter the number of inputs you want to enter: "))
lastinput=likeordislike(n)
print(lastinput)