from sqlite3 import*
from Tkinter import*
con=Connection('data')
cur=con.cursor()
cur.execute("create table if not exists emp(code varchar2(5) primary key,fname varchar2(10),lname varchar2(10))")

root=Tk()
root.geometry("450x350")
root.title("Employee record keeping system")
Label(root,text="Employee",font='calibri 20 bold').grid(row=0,column=0)
Label(root,text="System",font='calibri 20 bold').grid(row=0,column=2)
Label(root,text="Enter emp code",font='calibri 10 bold').grid(row=1,column=0)
Label(root,text="Enter first name",font='calibri 10 bold').grid(row=2,column=0)
Label(root,text="Enter last name",font='calibri 10 bold').grid(row=3,column=0)
Label(root,text="Enter ID to fetch",font='calibri 10 bold').grid(row=4,column=0)

code=Entry(root)
fname=Entry(root)
lname=Entry(root)
fetchid=Entry(root)


code.grid(row=1,column=1)
fname.grid(row=2,column=1)
lname.grid(row=3,column=1)
fetchid.grid(row=4,column=1)

def insert():
    cur.execute("insert into emp values(?,?,?)",(code.get(),fname.get(),lname.get()))
    con.commit()

def show():
    showid=str(fetchid.get())
    if showid=="":
        
        Label(root,text="invalid entry").grid(row=6,column=0)
    else:
        comm='select code,fname,lname from emp where code='+showid
        x=cur.fetchall()
    if x==[]:
        
        print 'Error'
    else:
            fname=x[0][1]
            lname=x[0][2]
            code=str(x[0][0])
            win=Tk()
            win.title("personal details")
            win.geometry("100x100")
            Label(win,text="code"+code).pack()
            Label(win,text=x[0][1]+[0][2]).pack()
            win.mainloop()


def showall():
    cur.execute("select code,fname,lname from emp")
    x=cur.fetchall()
    new=Tk()
    new.geometry("200x400")
    new.title("All record")
    for i in range (0,len(x)):
        fname=x[i][1]
        lname=x[i][2]
        Label(root,text=fname+" "+lname).pack()
        new.mainloop()

Button(root,text="insert",command=insert).grid(row=5,column=0)
Button(root,text="show",command=show).grid(row=5,column=1)
Button(root,text="show all",command=showall).grid(row=5,column=2)

Label(root,text="        ").grid(row=6,column=0)
root.mainloop()

        

    


