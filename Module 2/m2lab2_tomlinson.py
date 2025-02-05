#print("I like turtles")
# M2Lab2
# CSC 134
# Wendy Lee Tomlinson
# TODO: Learn some simple graphics tools


print("Hello, Python, I have never done this teehee")
print("")

from turtle import *

screen = Screen()
screen.bgcolor("black")

t = Turtle()
# change the color andd sze whatever you want
t.pencolor("white")
t.pensize(3) # width of the line

# movement of turtle
'''
t.fd(100) # forward
t.right(90)
'''
t.speed(0)

# this is a loop
t.fillcolor("red")
t.begin_fill()
for side in range(6):
    t.forward(100)
    t.right(60)
t.end_fill()



t.penup()
t.fd(200)
t.pendown()

t.fillcolor("purple")
t.begin_fill()
for side in range(6):
    t.fd(100)
    t.right(60)
t.end_fill()

t.penup()
t.left(180)
t.fd(200)
t.pendown()


for side in range(10):
    t.forward(100)
    t.right(60)


for side in range(8):
    t.left(60)
    t.fd(100)



for side in range(10):
    t.fd(100)
    t.right(60)


t.fillcolor("blue")
t.begin_fill()
for side in range(6):
    t.left(60)
    t.fd(100)
t.end_fill()






    

'''
stuff moving around

t.penup()
t.forward(300)
t.pendown()
for mycolor in ("blue","yellow","green"):
    t.color(mycolor)
    t.forward(100)
    t.right(120)
'''



