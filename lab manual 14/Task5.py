def total_overs(balls):
    overs=balls//6
    remain_balls=balls%6
    return overs,remain_balls
balls=int(input("Enetr the total overs: "))
overs,remain_balls= total_overs(balls)
print(f"{overs} overs and {remain_balls} balls were bold by the bowler")
    
