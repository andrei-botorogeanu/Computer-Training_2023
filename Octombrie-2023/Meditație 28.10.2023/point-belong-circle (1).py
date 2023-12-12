#import math
'''
in c++
typedef struct Point {
       float x,
             y;
} Point;

typedef struct Circle {
       Point O,
       float  r;
} Circle;

'''
class Point:
    def __init__(self, x, y):
        self.x = float(x)
        self.y = float(y)

class Circle:
    # date membre: centru O si R
    def __init__(self, x, y, r):
        #centrul cercului O(x,y)
        self.O = Point(x, y) #x = abscisa, y = ordonata #accesam cu Cerc[i].O.x si Cerc[i].O.y
        # raza
        self.R = float( r )

    #metoda magica
    def __repr__(self):
        # concateneaza niste siruri de caractere
        # primul sir este "cercul C("
        # al doilea sir este str(self.O.x)
        # al treilea str(self.O.x)
        # al patrulea str(self.O.y)
        #intoarce intotdeauna un STRING un sir de caractere
        return "cercul C(" + str(self.O.x) + "," + str(self.O.y) + ") si R = " + str(self.R)

def sqr(x):
    return x * x

def sqrt(n):
    x = n
    y = 1.0
    eps = 0.000001
    while x - y > eps:
        x = (x + y) / 2
        y = n / x
    return x

def calculezDistanta(p, p1):

    return sqrt( sqr(p1.x - p.x) + sqr(p1.y - p.y) )


def apartine(circle, point):

    if calculezDistanta(circle.O, point) < circle.R:

        return True #in c++ return true fara uppercase, adica lowercase

    else:

        return False #in c++ return false


def main():
    # convertim n la integer, pentru ca este citit ca string
    # in c++ cin>>n
    n = int(input("Introduceti numarul de cercuri: "))

    #in c++ Circle C[100]
    #definim an empty array , adica un container vector gol
    C = []

    # citim pe rand fiecare cerc
    for i in range(1, n + 1):
        print("Circle#%d:"%i)
        #citim centrul cercului O(x,y)
        # citim abscisa centrului
        x = float(input("x="))
        # citim ordinata centrului
        y = float(input("y="))
        # si raza
        r = float(input("Radius="))
        # se creeaza un obiect de tip Circle
        circle = Circle(x, y, r)

        # instanta clasei Circle adica un obiect de tip circle este adaugat in containerul

        # C
        # cu append adaugam in C diferinte cercuri
        C.append( circle )

    # daca avem in containerul C trei cercuri, asta inseamna ca C[0], C[1], C[2]
    # C[ cerc1, cerc2, cerc3 ]

    # zona pentru citirea punctului
    print("Introduceti punctul P(x,y)")
    x = float(input("x = ")) # abs
    y = float(input("y = ")) # ord
    P = Point(x, y)

    for i in range(0, n):
        # C[i] este un obiect de tip clasa Circle
        print( C[ i ] ) # tipareste pe ecran string-ul returnat de metoda magica __repr__
        #print C[0], C[1], C[2]

    for i in range(0, n):
        if apartine( C[ i ], P ) is True:
           # f = float
           # %.2f afiaseaza pe ecran numarul real cu 2 zecimale
           print("Punctul (%.2f, %.2f) apartine Cercului C(%.2f, %.2f) si R = %f" % (P.x, P.y, C[i].O.x, C[i].O.y, C[i].R))
    '''
    print("radical din 2 = ",sqrt(2))
    print("Radical din 3 = ",sqrt(3))

    print("radical din 2 cu functia buit-in Python = ",math.sqrt(2))
    print("Radical din 3 = ",math.sqrt(3))
    '''

    '''
    str1 = "abc"
    str2 = "ABC"
    a = 1
    b = 2
    print(a + b) #operatia de adunare aritmetica
    print(str1 + str2)# "abcABC" operatia de concatenare
    '''
    # numarul real r = 3.456456 %.4f => afiseaza 3.4564
main()
