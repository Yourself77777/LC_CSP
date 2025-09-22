# LC 7th loop notes

foods = ["Chocolate", "Pasta", "Brownies", "Cookies", "Garlic", "Bread", "Fajitas"]

# What is a loop?
# loops repete the code inside them for a specifide amount of time

# What are the two types of loops?
# For loop/ used mainly for lists 
# Example
for food in foods:
    print("Hi!")

for x in range(1,21):
    print(x)
# While loop/
# there are 3 steps
# 1. iterator> how many times loop run
# 2. Set stopping point
# 3. Increase
# Example
"""i = 0
while True: 
    print(i)
    i+=1"""
# An example on an infinite loop (one of 3 steps missing)
# Fixed 
i = 1

while i <= 20:
    print(i)
    i+=1

x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    x += 1

import random

d = 1
end = random.randint(1,20)

"""while d != end:
    print("Duck")
    d += 1

print("Goose")"""

while True:
    if d == end:
        print("Goose!")
        break
    else:
        print("Duck!")
        d += 1

# What is iteration
# Is one loop of the same code

# What are lists? 
# A colletion of types of data

# How do you make lists in python? 
# Example
# [thing1, thing2]

# How do you make for loops in python? 
"""for food in foods:
    print("Hi!")"""

# How do you make while loops in python?
"""x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    x += 1"""