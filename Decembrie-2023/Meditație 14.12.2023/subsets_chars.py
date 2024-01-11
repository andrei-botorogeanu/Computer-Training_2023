def main():
	str = "andrei" 
	n = len(str)
	number_of_subsets = 2**n

	for i in range(0, number_of_subsets):
		for j in range(0, n):
			if( 1<<j )&i:
				print( str[j], end = " ")
		print()


main()