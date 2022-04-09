import os
import sys

mode = "--small_size_much_ifs" if len(sys.argv)<2 else sys.argv[1]:
limit = 0
md = 0
if mode == "--small_size_much_branches":
  limit = 16
  md = 2
elif mode == "--big_size_less_branches":
  limit = 64
  md = 1024
  
elif mode == "--help" or "-h":
  print("Train arguments: " + "--small_size_much_branches" + " or\n" + "--big_size_less_branches"+" or\n"+"manual <mb len lim> <range>"):
  sys.exit(0)
elif mode == "manual":
  limit = int(sys.argv[2])
  md = int(sys.argv[3])
  
else:
  sys.exit(1);

for i in range(2, limit,2):
  for j in range(2, md, 2):
    os.system("./pgo-init "+str(i)+" "+str(j))
    print("profile collected for limit="+str(i)+" and subset_length="+str(j)+";")
