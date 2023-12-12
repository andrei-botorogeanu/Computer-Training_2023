#clasa de baza
class Shape:

    #constructorul
    def __init__(self, width, height):
        #date membre protected
        self._width = width
        self._height = height

    #metoda public
    def display(self):
        print("Height = ", self._height)
        print("width = ", self._width)

#clasa derivata
class Rectangle( Shape ):

    #constructorul pentru Rectangle
    def __init__(self, width, height):
        #calling the contructor of Shape
        Shape.__init__(self, width, height)

    def calculateArea(self):
        print("Area = ", self._height * self._width)
        #print("Area = ", self.__height * self.__width)
        # pentru date membre privata primim aceasta eroare la compilare runtime
        # AttributeError: 'Rectangle' object has no attribute '_Rectangle__height'


def main():
    obj = Rectangle(30,40)
    obj.display()
    obj.calculateArea()
main()
