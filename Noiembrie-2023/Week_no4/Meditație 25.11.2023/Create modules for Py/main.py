import stdio
import Algorithms as algo
import Mathematical_functions as math

def main():
    stdio.writeln("Hello, Universe!-print by stdio")
    print("Hello, Universe!-print by built-in)")
    a = 1111
    b = 2222
    print("Euclid(a,b)=>")
    stdio.writeln("Message for Euclid(a,b)=")
    stdio.writeln(algo.euclid_it(a,b) )
    stdio.writeln(algo.euclid_rec(a,b))
    print("Cifra de Control = ")
    stdio.writeln(algo.ControlDigit1(a))
    stdio.writeln(algo.ControlDigit2(b))
    stdio.writeln(math.sqrt(2))
    a = 4
    b = 1
    math.FirstDegreeEquation(a, b)
    v = [67, 45, 78, 90, 23, 42, 64]
    algo.sort_vec(v)
    print(v)

    for i in range(0, len(v)):
        stdio.writeln( v[i] )
    math.SecondDegreeEquation(-5, -2)
main()
