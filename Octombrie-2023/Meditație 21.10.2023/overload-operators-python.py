'''
Inmultirea numerelor complexe:
-----------------------------

z1 * z2  =

(x1 + i y1 )(x2 + i y2 ) =
x1 x2 + x1 y2 i + i x2 y1 - y1 y2 = x1 x2 - y1 y2 + i (x1 y2 + y1 x2)

Impartirea numerelor complexe:
---------------------------

z1    (x1 + i y1 ) (x2 - i y2 )   x1 x2 - x1 y2 i + i x2 y1 - i^2 y1 y2
-- = -------------------------- = ------------------------------------- =
z2    (x2 + i y2 ) (x2 - i y2 )         x2^2 + y2^2


x1 x2 + y1 y2 + i (x2 y2 - x1 y2)
---------------------------------
   x2^2 + y2^2


'''

# am definit o clasa = blueprint
class ABC:
    #are o singura data membra si anume "data"
    def __init__(self, a, b):
        self.data = a
        self.pen = b

    ## am suprascris metoda magica __repr__
    def __repr__(self):
      #am un string
      num = "AFISEAZA un string"
      num +=  " de culoare " + str( self.data )
      num +=  " DDDDDDDDD "
      num +=  " YYYYYYYY "
      num +=  " ZZZZZZZZ "
      # functia trebuie sa intoarca intodeauna un string
      return num

class Person:

      ##constructorul clasei
      def __init__(self, name, salary):
          self.name  = name
          self.salary = salary

      #supraincarcam metoda magica __repr__
      def __repr__(self):
          return "name = " + self.name + " salary = " + str( self.salary )

def main():
    ## am creat un obiect de clasa A
    ob = ABC("albastra",3)
    print( ob )

    a = "string1________"
    b = "3"

    print( ob )# afiseaza pe ecran stringul returnat de metoda magica __repr__
    print("un string color ", ob.data, ob.pen)

     ##am creat un obiect cu 2 data membre: dustin si 10
    obiect = Person("Dustin", 10)# se apeleaza def __init__(self, name, salary)
    print( obiect )
main()

'''
class Person {
      private:
      string name;
      float salary;

      public:
      //constructorul clasei in c++ ; in Python avem def __init__()
      Person(string name, int salary) {
         this->name = name;
         this->salary = salary
      }

      //aici supraincarcam operatorul << de afisare pe ecran; in python avem def __repr__()
      friend ostream& operator<<(ostream&stream, const Person&p);
};

      ostream& operator<<(ostream&stream, const Person&p) {
             stream<<"Name = "<<p.name<<" "<<p.salary;
             return stream
      }

Person obiect("Dustin", 10);
ABC obiect("blue")
cout<<obiect;
'''


'''
(a + bi) = a^2 - b^2 + 2 a b i
real = a*a - b * b
imag = 2 a b


'''
