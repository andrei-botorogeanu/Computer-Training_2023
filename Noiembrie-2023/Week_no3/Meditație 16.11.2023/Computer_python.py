import sys
# sys este pentru system ca sa putem da exit la fereastra
from tkinter import*
class Calculator( Frame ):
# Frame este clasa de baza 
	def __init__(self, root):
		super(Calculator, self).__init__(root)	
		self.formula = "000"
		self.label = Label(text=self.formula, font = ('Calibri', 18, 'bold'), bg = 'yellow', foreground = '#000' )
		self.build()
	def build(self):
		self.label.place(x=5, y=5)
		btns = [
		'C' , 'Del', '*' ,'Exit',
		'1','2','3','/' 
		'4','5','6','+'
		'7','8','9','-',
		'(','0',')','=',
		]
		x=5
		y=70
		for bt in btns:
			  com = lambda x = bt: self.calculate( x )

# x = lambda a : a + 10 print(x(5))
# x = lambda a, b, c : a + b + c print(x(5, 6, 2))

			  Button(text = bt, bg = 'lightgreen', font = ('Calibri', 12), command=com).place(x = x, y = y, width = 88, height = 80)
              x += 88
              if x > 350:
              	x = 5
              	y += 80
    def calculate(self, operation):
    	if operation == 'C':
    		self.formula = ""
    	elif operation == 'DEl':
    		self.formula = self.formula[0:-1]
    	elif operation == "=":
    		self.formula = str( eval( self.formula ) )
    	elif operation =="EXIT"
    		sys.exit()
    	elif operation == "+":
    		self.formula += "+"
    	else:
    		if self.formula == "0":
    			self.formula = ""
    		self.formula += operation
    	self.update()
    def update(self):
    	if self.formula == ""
    		self.formula = "0"
    	self.label.configure(text = self.formula)
def start_app():
	root =Tk()
	root['bg'] = 'yellow'
	root.geometry(" 360x475+100+100 ")
	root.title("Calculator App")
	root.resizable(True, True)
	app = Calculator(root)
	app.pack()
	return app

if __name__ == '__main__':
	start_app().mainloop()