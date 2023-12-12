def func():
	global stack, nodes, edges, matrix, start_node
	nodes=6
	edges=10
	data = [ [1,2],[1,6],[2,3],[2,5],[3,4],[3,5],[3,6],[4,5],[5,6],[6,1] ]
	matrix = [ [0 for i in range(nodes+1)] for j in range(nodes+1) ]
	stack=[0]*(nodes+10)
	for edges in data:
		x, y=  edges[0], edges[1]
		matrix[x][y]=1
		matrix[y][x]=1
	start_node=1
	back()

def printf():
  for i in range(1,nodes+1):
    print(stack[i], end= " ")
  print()
  
def init():
	stack[level]=0

def succesor():
	if stack[level] < nodes:
		stack[level]+=1
		return True
	return False

def solutia_noastra():
	return level == nodes and matrix[start_node][ stack[level] ]==1

def valid():
	if matrix[ stack[level-1] ][ stack[level] ]==0:
	   return False
	for i in range (1, level):
		if stack[level]==stack[i]:
			return False
	return True

def display_solution():
	for i in range(1, nodes+1):
		print(stack[i], end = " ")
	print()

def back():
 
    global level
    stack[1] = start_node
    level = 2
    init()
    while level > 0:
        h = True
        v = False
        while h is True and v is False:
            h = succesor()
            if h is True:
                v = valid()
        if h is True:
            if solutia_noastra() is True:
                printf()
            else:
                level+=1
                init()
        else:
            level-=1

func()