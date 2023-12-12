import sys

def writeln( x='' ):
	out = str(x)
	sys.stdout.write( out )
	sys.stdout.write("\n")
	sys.stdout.flush()
'''
sys.stdout.write(...) <=> print(...)
buffer = este o zona temporara in memoria calculatorului 
unde se scriu anumite informatii
{ int aux
  aux = a
  a = b
  b= aux }
Un buffer este ca un aux
Prin flush() se goleste buffer-ul si este mai eficient asa
Print-ul normal <=> write() + flush()
stdio.writeln(algo.euclid_rec(a,b))
    print("Cifra de Control = ")
    stdio.writeln(algo.ControlDigit2(b))
    stdio.writeln(math.sqrt(2))
    a = 4
    b = 1
    math.FirstDegreeEquation(a, b)
'''

