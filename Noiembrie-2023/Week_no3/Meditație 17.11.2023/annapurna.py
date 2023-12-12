#
# Pentru metode protected: _numeMetoda()
#               private: __numeMetoda()
# prefix _ or __
class Person:
    #data membra
    salary = 20
    #constructorul
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        # data membra privata
        self.__department = "Statistics"
        #self.salary = salary
    def display( self ):
        print(self.name, self.age, Person.salary)
    # metoda publica
    # _sign( self, x ):
    # __sign( self, x ):
    # __ =>private
    def _sign( self, x ):
        if x > 0:
            return "positiv"
        elif x < 0:
            return "negativ"
        else:
            return "zero"

    # metoda private
    def __hello(self, loud = True):

        if loud is True:
            print("HELLO, %s"%self.name.upper())
        else:
            print("Hello, %s"%self.name)
#in C++:
# class Person {
#   private:
#   string name;
#   int age;
#   float salary;
#}

#clasa derivata
# mosteneste data membre: public si protected
class Student( Person ):

    def __init__(self):

        pass

def main():
    ob = Person("Dustin",20,2000)
    ob.display()
    for i in [-1,0,1]:
        print(ob._sign( i ), end = " ") # AttributeError: 'Person' object has no attribute 'sign'
    ob.__hello(False)

main()
