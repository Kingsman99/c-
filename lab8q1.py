from Tkinter import *
from tkMessageBox import *
import sqlite3
con=sqlite3.Connection("Employee Details")
cur=con.cursor()
cur.execute("create table if not exists Emp(empid number(6) Primary key,firstname varchar2(10),lastname varchar2(10))")

root=Tk()
Label(root,text='Employee Record Keeping System',font='Times 20 bold').grid(row=0,column=0,columnspan=2)
Label(root,text='Enter Employee Code').grid(row=1,column=0)
Label(root,text='Enter First Name').grid(row=2,column=0)
Label(root,text='Enter Last Name').grid(row=3,column=0)
Label(root,text='Enter Employee ID').grid(row=4,column=0)

a=Entry(root)
a.grid(row=1,column=1)
b=Entry(root)
b.grid(row=2,column=1)
c=Entry(root)
c.grid(row=3,column=1)
d=Entry(root)
d.grid(row=4,column=1)

def Insert():
    
    x=int(a.get())
    y=b.get()
    z=c.get()
    dd=[x,y,z]
    cur.execute("insert into Emp values(?,?,?)",dd)
    con.commit()

def Call():
    #pk=int(d.get())
    cur.execute("select * from emp where empid=?",(d.get(),))
    x=cur.fetchone()
    showinfo('Information',x)
    

def Display():
    cur.execute("select * from emp")
    x=cur.fetchall()
    print x
    
Button(root,text='Insert',command=Insert).grid(row=8,column=0)
Button(root,text='Show',command=Call).grid(row=8,column=1)
Button(root,text='Show All',command=Display).grid(row=8,column=2)

root.mainloop()
