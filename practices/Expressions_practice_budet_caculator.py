# LC 7th Financial calculator

income = input("what is your monthly income\n")
rent = input("what is your monthly rent\n")
utilities = input("what is your monthly pay for utilities\n")
groceries = input("what is your monthly pay for groceries\n")
transportation = input("what is your monthly pay for transportation\n")

income_num = float(income)
rent_num = float(rent)
utilities_num = float(utilities)
groceries_num = float(groceries)
transportation_num = float(transportation)

print("you pay $" + rent + " for rent each month, that is " + str(round((rent_num / income_num)*100, 2))+ "% of you icome")
print("you pay $" + utilities + " for utilities each month, that is " + str(round((utilities_num / income_num)*100, 2))+ "% of you icome")
print("you pay $" + groceries + " for groceries each month, that is " + str(round((groceries_num / income_num)*100, 2))+ "% of you icome")
print("you pay $" + transportation + " for transportation each month, that is " + str(round((transportation_num / income_num)*100, 2))+ "% of you icome")
print("you should save " + str(round(income_num * 0.1, 2)) + " each month. That is 10% of your income")
print("you total spending money is $" + str(income_num - rent_num - groceries_num - transportation_num - utilities_num - (income_num * 0.1)))