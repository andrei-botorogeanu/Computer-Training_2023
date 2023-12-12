def main():
	n = int( input() )
	arr = [ int(t) for t in input().split() ]
	maxim = -1
	for i in range(0, n):
		if maxim < arr[i]:
			maxim = arr[i]
	arr2 = []
	for element in arr:
		if maxim%element!=0 or arr.count(element) ==+ 2:
			arr2.append(element) 
#	print(arr2)
	maxim2=-1
	for i in range(0, len(arr2)):
		if maxim2 < arr2[i]:
			maxim2 = arr2[i]
	print(maxim, maxim2 )

main()