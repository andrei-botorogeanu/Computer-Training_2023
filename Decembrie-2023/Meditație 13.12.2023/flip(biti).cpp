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
		no sum_max 