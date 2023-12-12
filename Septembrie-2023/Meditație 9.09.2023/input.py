# 4 30
# 1 2
# 3 4
# 2 3
# 1 1
def main():

	arr = []

	arr.append('a')
	arr.append('b')
	arr.append('c')
	arr.append('abcd')
	print(arr)

	line = [int(i) for i in input().split(" ")]

	num_obiects = line[0]
	Gmax = line[1]

	for j in range(1, num_obiects+1):
         
         line = [int(i) for i in input().split(" ")]         
   
         g = line[0]

         v = line[1]

         arr.append(Obiect(g,v))

main()    