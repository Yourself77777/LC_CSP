#LC 7th String Notes

# What makes something a string-
# -A set of symbles held together by quotation markes 
#Examples
first_name = input("What is your first name:\n").strip().title()

last_name = input("what is your last name:\n").strip().title()

full_name = first_name + " " + last_name
sentence = '       the quick brown fox jumps over the lazy dog           ' 
print(sentence.strip())

print("welcome to my program", full_name + "!")

# Why do we have strings
# because they help keep people from breaking the code

# How do stupid proofing and sanitixation relate to each other-
# Sanitaxtion is the first step stupid proofing you code

# What is debugging- 
#getting rid of all problems 

# How do you debug the different types of errors- 
# types of bugs-

# syntax Error- grammer and structur/ Example 
# error "this is a bug" 
# Fixed
error = "this is a bug" 

# Logic Error- is it ran the code but you get the wrong output/ Example
numOne = "1"
numTwo = "2"
print(numOne + numTwo)
# Fixed 
numOne = 1
numTwo = 2
print(numOne + numTwo)

# Run-Time Error- when it says nothing is wrong but it does not work/ Example
num = 3
# print("my favorite number is"+num)
# Fixed
print("my favorit number is", + num)
# Descrive what each of the methods below does-
find() # Tells us the begginning index of a line/ Example 
print(sentence[sentence.find("lazy"): len (lazy)+sentence.find("lazy")])



