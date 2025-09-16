# LC 7th Update budet caculatior

def money(monthly): 
    return input(f"what is you monthly {monthly}")

income = money("income")
rent = money("rent")
utilities = money("pay for utilities")
groceries = money("pay for groceries")
transportation = money("pay for transportation")

income_num = float(income)
rent_num = float(rent)
utilities_num = float(utilities)
groceries_num = float(groceries)
transportation_num = float(transportation)

def percent(pay):
    return str(round((pay / income_num)*100, 2))

print(f"you pay ${rent} for rent each month, that is {percent(rent_num)} % of your income")
print(f"you pay ${utilities} for utilities each month, that is {percent(utilities_num)} % of your income")
print(f"you pay ${groceries} for groceries each month, that is {percent(groceries_num)} % of your income")
print(f"you pay ${transportation} for transportation each month, that is {percent(transportation_num)} % of your income")
print("you should save " + str(round(income_num * 0.1, 2)) + " each month. That is 10% of your income")
print("you total spending money is $" + str(income_num - rent_num - groceries_num - transportation_num - utilities_num - (income_num * 0.1)))