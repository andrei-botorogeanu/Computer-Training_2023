'''
Problema:

Citim de la tastatura un Punct M(x,y)

N puncte

Care este cel mai apropiat punct de M
'''
# p = point(1,2,'3')
class Point:
    def __init__( self, x, y, id ):
        self.x = x
        self.y = y
        # o data membra
        self.id = int( id ) * 5
        #....oricate date membre

    def setId( self, index ):
        self.id = index

    def getId( self ):
        return self.id

    #apeleaza metoda magica
    def __repr__(self):
        return "Object => Point#" + str(self.id) + "("+ str(self.x) + "," + str(self.y) + ")"

def sqrt(n):
    x = n
    y = 1.0
    e = 0.000001
    while x - y > e:
        x = (x + y) / 2
        y = n / x
    return x

def computeDistance(p1, p2):
    return sqrt( (p2.x-p1.x)*(p2.x-p1.x)  + (p2.y-p1.y)*(p2.y-p1.y))

def readPoint( p ):
    #abscisa
    p.x = float(input("abs="))
    #ordonata
    p.y = float(input("ord="))

def main():

    print("Point#0")
    #am am creat un obiect de tip Point si numit p0
    #seteaza abs cu 0 si ordonata cu 0, index = 0
    p0 = Point(0,0,0)
    readPoint( p0 )
    print(p0)
    n = int(input("Dati numarul de puncte N = "))
    #am am creat un alt obiect de tip Point si numit p1

    print("Point#1")
    p1 = Point(0,0,1)
    readPoint(p1)
    print(p1)

    dist = computeDistance( p0, p1 )

    container = []

    #print(container[4])

    for i in range( 2, n + 1 ):
        print("Point#%d"%i)
        p = Point(0,0,i)
        readPoint( p )
        #adaugam puncte in container
        #container.append( p )
        print( p )
        #calculam distanta 
        d = computeDistance(p0, p)
        if d < dist:
            dist = d
            print("Found point")
            p1 = p #aici memoram cel mai apropiat punct de p0

    print("Distanta minima = %f. Cel mai apropiat punct de p0 = Point(%f, %f)" % (dist, p1.x, p1.y))

    # pentru Debug
    # print( container )



                     #(x1,y1,5)  (x2,y2,10), (x3,y3,14)
                     #(x,y,id), (x,y,id), (x,y,id)
    # container = [ punct1, punct2, punct3 ]
    #      index:   0        1      2
    # container[0] = punct1
    # container[1] = punct2
    # container[2] = punct3

    # it = 0, 1 , 2, 3,..., n-1

    '''
    for it in range(0, n):

        # la primul pas se returneaza id-ul punctului ,prin intermediul metodei getId() la linia 21
        # apoi in al doilea pas se evalueaza expresia logica operand1 == operand2
        # adica se verifica daca id-ul este egal cu (number)20
        # in cazul in care se evalueaza True se tipareste pe ecran punctul corespunzator
        # altfel se tipareste Not Found
        #
        if container[ it ].getId() == 20:
            #daca id-ul returnat este egal cu 20 atunci
            #atunci afiseaza punctul(abs, ord)
            print( container[ it ] )

        else:

            print( "Not Found" )

    #container[1].getId() va fi id-ul celui de-al doilea punct


    P0(1,1)
    P1(2,2)
    dist = distance de la P0 la P1

    P2(3,4)
    dist = distance de la P2 la P0
    if dist < d:
        distanta minima va fi dist

    p0(0,0,21312)
    p1(1,1,32498329)

    p2(3,4,id)
    p3(6,7,id)
    p4(8,8,id)
    '''

main()
