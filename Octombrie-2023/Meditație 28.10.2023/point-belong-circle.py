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
        self.x = x
        self.y = y

class Circle:

    def __init__(self, x, y, r):
        self.O = Point(x, y)
        self.R = float(r)

    def __repr__(self):
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
        circle = Circle(x,y,r)

        # instanta clasei Circle adica un obiect de tip circle este adaugat in containerul
        # C
        C.append( circle )

    # zona pentru citirea punctului
    print("Introduceti punctul P(x,y)")
    x = float(input("x = ")) # abs
    y = float(input("y = ")) # ord
    P = Point(x, y)

    for i in range(0, n):
        if apartine(C[ i ], P) is True:
           print("Punctul (%.2f, %.2f) apartine Cercului C(%.2f,%.2f) si R = %f" % (P.x, P.y, C[i].O.x, C[i].O.y, C[i].R))

    '''
    print("radical din 2 = ",sqrt(2))
    print("Radical din 3 = ",sqrt(3))

    print("radical din 2 cu functia buit-in Python = ",math.sqrt(2))
    print("Radical din 3 = ",math.sqrt(3))
    '''
main()
