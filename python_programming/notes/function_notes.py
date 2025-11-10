# LC 7th Function notes

# What a function is-
# Examples
#print()
#input()

def welcome():
    name = input("what is your name?")
    print(f"hello, {name}!")

print("this is not in my function")
welcome()
#welcome()
#welcome()
#welcome()
#welcome()


# Why we use functions-
# to make somthing happen

# How to write a function in Python-
#def add(example)

# What parameters and arguments are-
# parameters are function that only excist in a function and the arguments is the value you give to the parameters
# Example
def add(number, number2):
    number += num2
    print(number)

num1 = 12
num2 = 4

#add(80, 8)
#add(3, 6)
#add(9, 20)
#add(11, 71)
#add(num1, num2)

# How to use parameters and arguments in python-
# Example
#add(80, 8)
#add(3, 6)
#add(9, 20)
#add(11, 71)
#add(num1, num2)

# What return statements are-
# is taking your def inputs and taking them and putting them where and when you call them
# Example
import random

def roll(mod):
    return random.randint(2, 18) + mod

strength = roll(0)
dextarity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print("Here are your stats!")
print(f"Strength: {strength}\nDex: {dextarity}\nInt: {intellegence}\nChar: {charisma}")

# How to use return statements in a program-
#return random.randint(2, 18) + mod