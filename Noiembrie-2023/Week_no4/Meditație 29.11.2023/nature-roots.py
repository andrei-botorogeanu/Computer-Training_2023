#
# Ecuatia de gradul 2
# Ax^2 + Bx + c = 0
# Relatiile lui Viete:
# S = -b/a (x1+x2 =S)
#
# P = c/a (x1*x2 = P)
# x^2 -Sx + P = 0
#
#
def sqrt(n):
    x = n
    y = 1.0
    eps = 0.000001
    while x - y > eps:
        x = (x + y) / 2
        y = n / x
    return x
def Nature_Roots_Quadratic_Equation(a, b, c):
    discriminant = b ** 2 - 4 * a * c
    S = -b/a
    P = c/a
    #print(f"Sum = {S}, Prod = {P}")
    print("Relatiile lui Viete! S = -b/a; P = c/a")
    print("Sum = %.2f, Prod = %.2f"%(S,P))
    #f vine de la format

    if discriminant < 0:

        return["Nu avem solutii","reale","Avem solutii","imaginare"]

    elif discriminant >= 0:

        #determinam x1, x2 pentru verificare
        #x1 = (-b - sqrt(discriminant)) / (2*a)
        #x2 = (-b + sqrt(discriminant)) / (2*a)
        #print(f"x1={x1:.2f} x2={x2:.2f}")
#x1 = -4
#x2 = 7
# Produsul < 0
# Sum > 0
# |-4| < |7|
# |7| > |-4|
#
#x1<x2
#
        if S > 0:
            if P > 0:
                return["x positive","y positive"]
            elif P < 0:
                return["x negative","y positive","|x1| < |x2|"]
            else:
                return["x1 zero","x2 positive"]
        else:
        #S <= 0
            if P > 0:
                return["x1 negative","x2 negative"]
            elif P < 0:
                return["x1 negative","x2 positive","|x1|>|x2|"]
            else:
                return["x1 zero","x2 negative"]

def main():
    #x1 = 2
    #x2 = 3
    #x^2 -5x + 6

    #x1 = 7
    #x2 = -4
    #x1 + x2 = 7 + 4 = 11 > 0
    #x1*x2 =  7 * (-4) = -28 < 0
    #x^2 -11x -28 = 0
    A = 1
    B = -5
    C = 6
    #exemplu pentru print(*LISTA, sep="delimitator")
    #vector = ["111", "2222", "3333", "solutii", "imaginare"]
    #print(type(vector))
    #print(*vector,sep="//////")
    print(*Nature_Roots_Quadratic_Equation(A,B,C), sep="\\\///")
    #print cu asterix *
    #sep = "..." separator

    #
    # x1 = 9 si x2 =-5
    # S > 0
    # P < 0
    # |x1| > |x2|
main()
