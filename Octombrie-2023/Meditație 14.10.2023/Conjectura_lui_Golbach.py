import math
def e_prim(n):
	for i in range(2, int(math.sqrt(n+1))):
		if not n%i :
			return 0
	return 1
def golbach(n):
	for i in range(2, (n//2)+1 ):
		if not e_prim(i) and e_prim(n-i):
			print(n, "=", i, "+", n-i)
def main():
	n = int(input())
	m = int(input())
	mat = [[ 0 for j in range(0, m)] for i in range(0, n+1)]
	
	for i in range(0, n):
		for j in range(0, m):
			mat[i][j] = int(input())
	for i in range(0, n):
		for j in range(0, m):
			if not mat[i][j]&1 :
				golbach(mat[i][j])		
main()
'''
In python avem:
5/2 = 2,5(ia zecimal)
5//2 = 2(ia doar partea intreaga)

Python 3.10.12 (main, Jun 14 2023, 19:14:29)  [GCC 13.1.0 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license" for more information.
>>> not 1
False
>>> not 0
True
>>> not 8
False
>>> not 5%2
False
>>> 5%2
1
>>> vector = []
>>> print(vector)
[]
>>> vector = [0]*10
>>> print(vector)
[0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
>>>
'''