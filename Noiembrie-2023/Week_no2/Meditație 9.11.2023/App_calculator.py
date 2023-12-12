from tkinter import *
# " * " inseamna ca se importa toate metodele pe care le are libraria tkinter
# window este o instanta a clasei Tk
window = Tk()
window.title("App UI Python")
window.geometry("600x450")

eticheta1 = Label(window, text = "a = ", font = ('Arial 15 bold')) 
eticheta2 = Label(window, text = "b = ", font = ('Arial 15 bold'))
result = Label(window, text = "GCD(a,b) = ")
# aici doar am creat aceste etichete
#trebuie sa le si adaugam 

eticheta1.place(x=100, y=50)
eticheta2.place(x=100, y=100)
result.place(x=100, y=150)

textfield1 = Entry(window, width=12, font=('Arial 14'), bg = "yellow")
textfield2 = Entry(window, width=12, font=('Arial 14'), bg = "yellow")
textfield3 = Entry(window, width=12, font=('Arial 14'), bg = "lightgreen")

textfield1.place(x=150, y=50)
textfield2.place(x=150, y=100)
textfield3.place(x=180, y=150)

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
def reset():
	textfield1.delete(0, END)
	textfield2.delete(0, END)
	textfield3.delete(0, END)


btn_run= Button(window, text = "Euclid", height=5, width=10, font=('Arial 16'), command=euclid)
btn_Reset= Button(window, text = "Reset", height=5, width=10,font=('Arial 16') , command=reset)
# aici am creat butoanele

btn_run.place(x=140, y=300)
btn_Reset.place(x=300, y=300)

window.mainloop()
