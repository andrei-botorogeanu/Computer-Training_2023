#
# Author: ____
# Descriere: ___
# Licence: MIT
def main():
    #aici citim numarul de elemente ale listei
    n = int(input())
    #aici stocam in variabila arr elementele vectorului
    arr = [int(i) for i in input().split()]

    #aflam cel mai mare numar din lista
    MAXELEMENT = max( arr )

    #declaram un vector
    vec = []

    #iteram prin vectorul arr
    #pentru fiecare element executam
    for i in arr:
        if (MAXELEMENT % i) != 0 or arr.count(i) == 2:
            vec.append( i )
    print(vec)        
    print(MAXELEMENT, max(vec))
main()
