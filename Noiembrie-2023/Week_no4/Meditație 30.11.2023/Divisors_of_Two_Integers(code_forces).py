def main():
	n = int( input() )
	
	vec = [ int(i) for i in input().split() ]
'''
	maxim=-1
	for i in range(0, n-1):
		if maxim<vec[i]:
			maxim = vec[i]

	for i in range(1, n-1):
		if vec[0] == vec[i]:
			d = vec[i]
			break

	minim = vec[n-1]%d==0
	for i in range(1, n-1):
		if minim> vec[i]%d:
			minim = vec[i]%d
	print(minim, maxim)
'''
main()