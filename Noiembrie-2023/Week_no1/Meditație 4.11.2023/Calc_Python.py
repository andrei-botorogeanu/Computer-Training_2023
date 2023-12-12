def menu_options():
	ok = False
	while not ok:
		print("Menu Options:")
		print("\t1 = Add;")
		print("\t2 = Subtract;")
		print("\t3 = Multiply;")
		print("\t4 = Divide;")
		print("\t5 = Pow;")
		print("\t6 = Euclid;")
		user_selection = input("Please make a selection: ")
		if user_selection in ('1','2','3','4','5','6'):
			ok=True
		else: 
			ok=False
			print("WARNING: Invalid input, must be 1-6")
	return user_selection

def get_numbers_from_user():
	n1 = int( input("a = ") )
	n2 = int( input("b = ") )
	return n1, n2

def check_if_user_has_finished():
	user_input_accepted = False
	while not user_input_accepted:
		user_input = input("Do you want to finished? y/n ")
		if user_input == 'y':
			ok_to_finished = True
			user_input_accepted = True 
# user_input este optiunea noastra(y or n)
		elif user_input == 'n':
			ok_to_finished = False
			user_input_accepted = True 
		else: print("The response must be just y/n. Please try again: ")
	return ok_to_finished

def add(a, b):
	return a+b
def subt(a, b):
	return a-b
def div(a, b):
	return a/b
def euclid(a, b):
	while(a!=b):
		if a>b:
			a=a-b
		else: b=b-a
	return a
def multiply(a, b):	
	return a*b
def pow(a, b):
	p=1
	for i in range(1, b+1):
		p = p*a
	return p

def main():
	print("App Calculator: ")
	result = 0
	finished = False
	while not finished:
		menu_choice = menu_options()
		a, b = get_numbers_from_user()
		if menu_choice == '1':
			result = add(a, b)
		elif menu_choice == '2':
			result = subt(a, b)
		elif menu_choice == '3':
			result = multiply(a, b)
		elif menu_choice == '4':
			result = div(a, b)
		elif menu_choice == '5':
			result = pow(a, b)
		else:
			result = euclid(a, b)

		print(result)
		finished = check_if_user_has_finished()
	print("Exit")	
main()
