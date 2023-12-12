
# generator
def Primes():

    n = 2

    while True:

        j = 2

        prime = 1

        while(j * j <= n and prime == 1) :

            prime = n % j != 0

            j +=1

        if prime:

           yield n

        n +=1

def Fibo():
    a, b = 0, 1
    while True:
        c, a, b = a, b, a + b
        yield c

def main():

    arr = ["ABC","xyz", 3, 4, 5 ]

    for item in arr:
        print( item )

    for num in Primes():
        print(num, end = " ")
        if num > 100:
            break

    print("Numerele lui Fibonacci: ")

    for i in Fibo():

        print(i, end = " ")

        if i > 100:

            break


main()
