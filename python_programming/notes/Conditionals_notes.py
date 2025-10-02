# LC 7th Conditional notes

# What puts something inside of the "if" statement?
# if your are asking a question and want a specific statement for a specific answer
# A.K.A. Tab

# What do "if" statements do?
# Tells code to check for true of false
# Example
#homework_done = input("is your homework done: ").strip().capitalize()

#if homework_done == "Yes":
    #print("Yes you can go!")


# What are boolean statements?
# They always show as a true or false

# if not the answer for if statement then does this instead
# Example
# What do else statements do
#else:
    #print("Then go do your homework")

# What kind of statement do you use if you have more than 2 needed outcomes?
# Then do your least likly outcome first 

# What do each of the differents symbols mean in Conditionals?
# Example 
grade = 110

if grade >= 90:
    if grade > 100:
        print ("You cheated that isn't possible!")
    else:
        print(f"You have {grade}% that is an A!")
elif grade >= 80:
    print(f"You have {grade}% that is an B!")
elif grade >= 70:
    print(f"you have {grade}% that is a C!")
else:
    print(f"You have {grade}% that is a D or lower :(")

# What are the 3 logical operatiors for?
# and  
# not  
# or  
# Example
name = input("What is your name: ")

if name == "Ms LaRose":
    print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student!")
    if grade >= 70:
        print("And you are passing the class!")

# What are logical operatiors for? 
# so you can meet all the oporations that you need

# What does a nested conditional statement do?
# a condition that only happens inside anothor one