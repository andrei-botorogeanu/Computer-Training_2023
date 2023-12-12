import math
import random
# seria Taylor - metoda Leibniz
#
# PI ~ 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 - 1/15...)

# variabila "i" ia valori = 3,5,7,9,11,....
#

#PI ~ |sir(n+1) - sir(n)| < EPS

def leibniz1():
	
	term1 = 1
	term2 = 1 - 1/3
	EPS = 0.000001
	sign = 1
	i = 5
    # in momentul in care gasim 4 (term1-term2) sau 4 (term2-term1) < EPS
    # atunci ciclarea se opreste si am gasit o aproximare buna a numarul irational PI
	while 4 * (term1 - term2 if term1 > term2 else term2 - term1) >= EPS:

		  #print(term1, term2)
		  term1 = term2
		  term2 += sign * 1 / i 
		  # i = 5,7,9,11,13,15,17...pana plus infinit
		  sign *= -1
		  i += 2 # i = i + 2
          
	return 4 * term2	  


def leibniz2(repeats = 1000):

	# PI ~ 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 - 1/15...)
    sum = 0

    print("repeats: ",repeats)

    for i in range( repeats + 1 ):

    	sum += pow(-1, i) / (2 * i + 1)

    return 4 * sum	

    # term1 => pow(-1,0) / (2 * 0 + 1) = 1
    # term2 => pow(-1,1) / (2 * 1 + 1) = -1/3
    # term3 => pow(-1,2) / (2 * 2 + 1) = 1/5 
    # term4 => pow(-1,3) / (2 * 3 + 1) = -1/7

def monte_carlo(repeats = 10**4):
    
    square_count, circle_count = 0, 0

    for i in range(0, repeats+1):

        x, y = random.random(), random.random()

        if x*x + y*y <= 1:

            #punctul se afla in interiorul cercului
        	circle_count+= 1

        # punctul se afla in interiorul patratului
        square_count +=1

    # Pentru a-l aproxima pe PI => 4 * numarul de puncte generate Random in 
    # interioul cercului / numarul de puncte generate random in interiorul patratului
    return 4 * circle_count / square_count


def main():
   
    print("Metoda Leibniz cu EPS:",leibniz1())
    print("Functia Built-in PI din math", math.pi)    
    print("Metoda Monte Carlo", monte_carlo())
       
    print("Metoda Leibniz cu un simplu for:",leibniz2(2400))
    #term1 = 5
    #term2 = 10

    #print(term1 - term2 if term1 > term2 else term2 - term1)

    #sunt echivalente

    #if term1 > term2:
    #	print(term1-term2)
    #else:
    #    print(term2-term1)	

    #print(random.random())
    #n = random.randint(0,100)
    #print("Random intre 0 si 100: ",n)
    
main()    