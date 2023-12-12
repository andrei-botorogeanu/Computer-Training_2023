class Shape():
	def __init__(self, height, width):
		self.__height = height
		self.__width  = width
	def display(self):
		print( "Heigth = %s" %self.__height )
		print( "Width = %s" %self.__width )
class Rectangle( Shape ):
	def __init( self, height, width ):
		super().__init__( height, width )
	def Calculate_Aria(self):
		print("The aria is equal with: ")
		return self.__height * self.__width	
def main():
	obj = Rectangle(45, 76)
	obj.display()
	print( obj.Calculate_Aria() )
main()