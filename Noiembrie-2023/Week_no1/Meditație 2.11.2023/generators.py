# yield stocheaza valorile intermediare, rezultatele partiale, ale functiei respective
# generator
#yield = generator
#yield transforma functia intr-un generator 
def Primes():
    n = 2
    cnt = 1
    while True:
        j = 2
        prime = 1
        while(j * j <= n and prime == 1) :
            prime = n % j != 0
            j +=1
        if prime:
           yield cnt 
           yield n
           cnt+=1
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

    cnt = 0
    for num in Primes():
        cnt+=1
        print(num, end = " ")
        if cnt%2==0:
            print()
           # print("index: ")
        if num > 100:
            break

    print("Numerele lui Fibonacci: ")

    for i in Fibo():
        print(i, end = " ")
        if i > 100:
            break


main()
