def main():
#MEAN
	speed= [56,23,23,78,51,56,23,78,9]
	sum_speed = sum(speed)
	n = len(speed)
	mean = sum_speed/n
	print(mean)	
#MEDIAN
	speed.sort()
	if len(speed)%2==0:
		
		number1 = speed[n//2-1]
		number2 = speed[n//2]
		print( (number1+number2)/2 )
	else:
		number1 = speed[n//2]
		print(number1)
#MODE
	counting = []
	print(speed)
	i=0
	while i<len(speed):
		counting.append( speed.count( speed[i] ) )
		i=i+1;
	print(counting)
	dictionar = dict(zip(speed,counting))
	print(dictionar)

	answear = {k for (k,v) in dictionar.items() if v == max(counting) } 
	print(answear)
main()