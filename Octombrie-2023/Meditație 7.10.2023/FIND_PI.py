import random
import math
def leibniz():
	suma=0 
	repeats=1000
	for i in range(0,repeats):
		suma = suma + pow(-1, i)/(2*i+1)
	return 4*suma

def leibniz2():
	term1=1 
	term2 = 1-1/3
	i=5
	sign=1
	EPS=0.0000001
	while 4*(term1-term2 if term1>term2 else term2-term1)>=EPS:
		term1=term2
		term2+=sign*(1/i)
		sign=sign*(-1)
		i=i+2
	return 4*term2
def monte_carlo():
	number_circle=0
	number_square=0
	for i in range(0, 10**4):
		x, y = random.random(), random.random()
		if x*x + y*y<=1:
			number_circle+=1
		number_square+=1
	return 4 * number_circle / number_square

def main():
#Metoda Leibniz
# 1 - 1/3 + 1/5 - 1/7 ...
	print(leibniz())
	print(leibniz2())
	print(monte_carlo())
main()