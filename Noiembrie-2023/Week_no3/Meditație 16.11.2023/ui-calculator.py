import sys
from tkinter import *

#clasa derivata Calculator
#clasa de baza este Frame
class Calculator( Frame ):

      #constructor
      def __init__(self, root):
          super(Calculator, self).__init__(root)
          self.formula = "0"
          self.label = Label(text=self.formula, font = ('Calibri', 18, 'bold'), bg = 'yellow', foreground = '#000')
          self.build()

      def build(self):
          self.label.place(x=5,y=5)
          btns = [
          'C', 'DEL', '*', 'EXIT',
          '1','2','3','/',
          '4','5','6','+',
          '7','8','9','-',
          '(','0',')','=',
          ]
          x = 5
          y = 70
          #loop print vectorul de butoane
          for bt in btns:
              com = lambda x = bt: self.calculate( x )
              Button(text = bt, bg = 'lightgreen', font = ('Calibri', 12), command=com).place(x = x, y = y, width = 88, height = 80)
              x += 88
              if x > 350:
                  x = 5
                  y += 80
      def calculate(self, operation):
          # se sterge tot din label
          if operation == 'C':
              self.formula = ""
          #se sterge doar ultimul digit
          elif operation == "DEL":
              self.formula = self.formula[0:-1]
          #se evalueaza expresia
          elif operation == "=":
              self.formula = str( eval( self.formula ) )
          elif operation == "EXIT":
              sys.exit()
          elif operation == "+":
              self.formula += "+"
          else:
              if self.formula == "0":
                  self.formula = ""
              self.formula += operation
          self.update()
      def update(self):
        if self.formula == "":
            self.formula = "0"
        self.label.configure(text=self.formula)

def start_app():
    root = Tk()
    root['bg'] = 'yellow'
    root.geometry("360x475+100+100")
    root.title("Calculator App")
    root.resizable(True, True)
    app = Calculator(root)
    app.pack()
    return app


if __name__ == '__main__':
  start_app().mainloop()

