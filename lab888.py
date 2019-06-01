from Tkinter import *
from tkMessageBox import *
import sqlite3
con=sqlite3.Connection("apun ka pata")
cur=con.cursor()
cur.execute("create table if not exists Vic(empid number(6) Primary key,firstname varchar2(10),lastname varchar2(10))")
root=Tk()

Label(root,text='Employee record keeping system',font='times 20 bold').grid(row=0,column=0,columnspan=2)
Label(root,text='Enter employee name').grid(row=1,column=0)
Label(root,text='Enter first name').grid(row=2,column=0)
Label(root,text='Enter last name').grid(row=3,column=0)
Label(root,text='enter your employee id').grid(row=4,column=0)

a=Entry(root)
a.grid(row=1,column=1)
b=Entry(root)
b.grid(row=2,column=1)
c=Entry(root)
c.grid(row=3,column=1)
d=Entry(root)
d.grid(row=4,column=1)


def insert():
    x=int(a.get())
    y=b.get()
    z=c.get()
    dd=[x,y,z]
    cur.execute("insert into vic values(?,?,?)",dd)


def call():
    cur.execute("select * from vic where empid=?",(d.get(),))
    x=cur.fetchone()
    showinfo=('information',x)


def display():
    cur.execute("select * from vic")
    x=cur.fetchall()
    print x





Button(root,text='Insert',command=insert).grid(row=8,column=0)
Button(root,text='show',command=call).grid(row=8,column=1)
Button(root,text='show all',command=display).grid(row=8,column=2)



root.mainloop()
