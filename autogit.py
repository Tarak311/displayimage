
import sys, os
os.system("git pull")
os.system("git add .")
commitmsg=[]

commitmsg.append("correction done: ")
commitmsg.append("add new file/s: ")
commitmsg.append("changed cmake file/s: ")


print(int(sys.argv[1]))
print(sys.argv[2])
value = int(sys.argv[1])
msg = sys.argv[2]
os.system('git commit '+'-m "' + commitmsg[value] + msg + '"')
os.system('git push')
