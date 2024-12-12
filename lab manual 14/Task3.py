def Area(country_name,country_area):
    percent=(country_area/148940000)*100
    return percent
country_name=input("Enter the country name: ")
country_area=int(input("Enetr the country area: "))
result=Area(country_name,country_area)
print(f"{country_name} is {result:.2f}% of the world's landmass")

