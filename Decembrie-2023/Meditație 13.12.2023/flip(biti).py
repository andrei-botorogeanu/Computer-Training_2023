def main():
	sum_max = 0
	fin = open("flip.in", "r")
	lines_cols = [ int(i) for i in fin.readline().slit() ]
	#se citeste prima linie
	n = lines_cols[0]
	m = lines_cols[1]
	matrix = [list(map(int, fin.readline().split()))  for _ in range(n) ]
	size= 2**n
	mask = 1
	def solve_flip(stack):
		nonlocal sum_max
		stotal = 0
		matrix = [row[:] for row in matrix ]
		for line in stack:
			for j in range(m):
				matrix2[line][j] *= -1

		for j in range (m):
			s = 0
            for i in range(n):
                s += matrix2[i][j]
            if s < 0:
                s *= -1
            stotal += s
    for i in range(1, size):
        stack = []
        for j in range(0, n):
            if (mask<<j)&i:
                #print(j+1, end =" ")
               stack.append( j )
        solve_flip(stack)
    print(sum_max)
main()