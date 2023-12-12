def main():

	print("Teorema Fundamentala a Aritmeticii:\n")
	n = int(input("N = "))
	i = 2
	while not n==1:
		fm=0
		while n%i==0:
			fm += 1
			n //=i
		if fm: 
			print("%d^%d\n" %(i, fm))
		i += 1
main()