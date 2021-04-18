#coding utf-8


import os

w=open(r"C:\Users\xysee\Documents\tencent files\2496873241\FileRecv\time.csv","w")
w.write("time\n")
import random
m3=0
m2=0
for i in range(1,182):
        j=random.randint(1,3)
        if(m3>30):
            j=2
        if(m2>95):
            j=1
        if j==1:
            w.write("[")
            w.write(str(random.randint(1,60)))
            w.write("]\n")

        elif j==2:
            m2+=1
            w.write("[")
            w.write(str(random.randint(1,60)))
            w.write("#")
            w.write(str(random.randint(1,60)))
            w.write("]\n")

        elif j==3:
            m3+=1
            w.write("[")
            w.write(str(random.randint(1,60)))
            w.write("#")
            w.write(str(random.randint(1,60)))
            w.write("#")
            w.write(str(random.randint(1,60)))
            w.write("]\n")
        else:
            continue;
w.close()
        
