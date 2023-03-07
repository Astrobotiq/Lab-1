name=input("What is student's name?\n")
lab=int(input("What is student's lab grade?\n"))
midterm = int(input("What is student's midterm grade?\n"))
final = int(input("What is student's final grade?\n"))

score = (lab/4)+(midterm*0.35)+(final*0.4)

lab = str(lab)
midterm = str(midterm)
final = str(final)
score = str(score)

print("Name: "+name+
      "\nLab: "+lab+
      "\nMidterm: "+midterm+
      "\nFinal: "+final+
      "\nLast Score: "+score)