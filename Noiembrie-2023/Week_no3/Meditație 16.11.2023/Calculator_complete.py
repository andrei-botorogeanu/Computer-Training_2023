from tkinter import *
# " * " inseamna ca se importa toate metodele pe care le are libraria tkinter
# window este o instanta a clasei Tk
window = Tk()
window.title("App UI Python")
window.geometry("400x450")

eticheta1 = Label(window, text = "a = ", font = ('Arial 15 bold')) 
eticheta2 = Label(window, text = "b = ", font = ('Arial 15 bold'))
result = Label(window, text = "RESULT(a,b) = ", font = ('Arial 15 bold'))
# aici doar am creat aceste etichete
#trebuie sa le si adaugam 

eticheta1.place(x=25, y=25)
eticheta2.place(x=25, y=50)
result.place(x=25, y=85)

textfield1 = Entry(window, width=12, font=('Arial 14'), bg = "yellow")
textfield2 = Entry(window, width=12, font=('Arial 14'), bg = "yellow")
textfield3 = Entry(window, width=16, font=('Arial 14'), bg = "lightgreen")

textfield1.place(x=60, y=25)
textfield2.place(x=60, y=55)
textfield3.place(x=25, y=120)

def number_1():
	print(1)
def number_2():
	return 2
def number_3():
	return 3
def number_4():
	return 4
def number_5():
	return 5
def number_6():
	return 6
def number_7():
	return 7
def number_8():
	return 8
def number_9():
	return 9
def number_0():
	return 0

def gcd(a, b):
	while b:
		r = a % b
		a = b
		b = r
	return a
def euclid():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = gcd(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )

def add(a, b):
	return a+b
def operation_add():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = add(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )
def subt(a, b):
	return a-b
def operation_subt():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = subt(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )
def div(a, b):
	return a/b
def operation_div():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = div(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )
def multiply(a, b):	
	return a*b
def operation_multiply():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = multiply(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )
def pow(a, b):
	p=1
	for i in range(1, b+1):
		p = p*a
	return p
def operation_pow():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = pow(number_1, number_2)
	textfield3.delete(0, END)
	textfield3.insert(0, str(result) )
def operation_no_1():
	number_1 = int(textfield1.get())
	number_2 = int(textfield2.get())
	result = number_1(number_1, number_2)
	textfield2.delete(0, END)
	textfield2.insert(0, str(result) )

def reset():
	textfield1.delete(0, END)
	textfield2.delete(0, END)
	textfield3.delete(0, END)

btn_Euclid = Button(window, text = "Euclid", height=4, width=5, font=('Arial 16'), command=euclid, bg = "lightgreen")
btn_Reset = Button(window, text = "Reset", height=1, width=14,font=('Arial 16') , command=reset, bg = "red")
btn_add = Button(window, text= "Add", height=4, width=5, font=('Arial 16'), command=operation_add, bg = "lightgreen")
btn_subt = Button(window, text="Subt", height=4, width=5, font=('Arial 16'), command=operation_subt, bg = "lightgreen")
btn_div =  Button(window, text="Div", height=3, width=5, font=('Arial 16'), command=operation_div, bg = "lightgreen")
btn_multiply = Button(window, text="Multiply", height=3, width=6, font=('Arial 16'), command=operation_multiply, bg = "lightgreen")
btn_pow = Button(window, text="Pow", height=3, width=5, font=('Arial 16'), command=operation_pow, bg = "lightgreen")

btn_no_1 = Button(window, text="1", height=1, width=2, font=('Arial 16'), command=operation_no_1, bg = "lightgreen")
#btn_no_2 = Button(window, text="2", height=1, width=1, font=('Arial 16'), command=operation_no_2, bg = "lightgreen")
#btn_no_3 = Button(window, text="3", height=1, width=1, font=('Arial 16'), command=operation_no_3, bg = "lightgreen")
#btn_no_4 = Button(window, text="4", height=1, width=1, font=('Arial 16'), command=operation_no_4, bg = "lightgreen")
#btn_no_5 = Button(window, text="5", height=1, width=1, font=('Arial 16'), command=operation_no_5, bg = "lightgreen")
#btn_no_6 = Button(window, text="6", height=1, width=1, font=('Arial 16'), command=operation_no_6, bg = "lightgreen")
#btn_no_7 = Button(window, text="7", height=1, width=1, font=('Arial 16'), command=operation_no_7, bg = "lightgreen")
#btn_no_8 = Button(window, text="8", height=1, width=1, font=('Arial 16'), command=operation_no_8, bg = "lightgreen")
#btn_no_9 = Button(window, text="9", height=1, width=1, font=('Arial 16'), command=operation_no_9, bg = "lightgreen")
#btn_no_0 = Button(window, text="0", height=1, width=1, font=('Arial 16'), command=operation_no_0, bg = "lightgreen")

# aici am creat butoanele

btn_Euclid.place(x=190, y=300)
btn_Reset.place(x=25, y=150)
btn_add.place(x=25, y=300)
btn_subt.place(x=100, y=300)
btn_div.place(x=25, y=200)
btn_multiply.place(x=100, y=200)
btn_pow.place(x=190, y=200)
btn_no_1.place(x=280, y=200)

window.mainloop()