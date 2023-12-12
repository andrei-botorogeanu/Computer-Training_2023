#Ridicare la patrat
def sqr(n):
	return n * n

#Square root
def sqrt(n):
	x = n
	y = 1.0
	eps = 0.000001
	while x - y > eps:
		x = (x + y) / 2
		y = n / x
	return x

def FirstDegreeEquation(a, b):
	if a==0:
		if b==0:   
			print("Ecutia are o infinitate de solutii!")
		else:
			print("Ecuatia nu are solutii!")
	else:
		if b==0:
			print("x = 0")
		else:
			print("x = ", -b/a)

def SecondDegreeEquation(b, c):
# ax^2 + b x + c = 0
	a = 1
	delta = b*b-4*a*c
	if not b and not c:
		print("x = 0")
	elif not b:
		print("Solutia este: %.2f * i " %(sqrt(-delta)/2) ) 
	elif delta<0:
		print("Solutiile sunt:")
		print("%.2f + %.2f * i" %(-b/2 ,sqrt(-delta)/2))
		print("%.2f - %.2f * i" %(-b/2 ,sqrt(-delta)/2))
	elif delta==0:
	    printf( -b/2 )
	else:
		x1 = (-b+sqrt(delta)) / 2
		x2 = (-b-sqrt(delta)) / 2
		print("Solutiile sunt:")
		print(x1, x2)