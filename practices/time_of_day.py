# LC 7th Time Of Day


time = int(input("What is the time of day military time ther hour:\n"))

if time >= 17:
    print(f"Good evening it is {time}:00")
elif time>= 12:
    print(f"Good afternoon it is {time}:00")
else:
    print(f"good morning it is {time}:00")