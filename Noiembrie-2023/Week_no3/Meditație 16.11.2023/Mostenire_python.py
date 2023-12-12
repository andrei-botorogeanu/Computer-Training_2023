class Person():
#clasa de baza
	def __init__(self, name, age):
		self.name = name
		self.age = age
	def birthday(self):
		print("Happy birthday, You were: ", self.age)
		self.age+=1
		print("You are : ", self.age )

class Employee( Person ):
#clasa derivata
	def __init__(self, name, age, id):
		self.id = id
		super().__init__(name, age)

	def Calculate_pay(self, hours_work):
		rate_of_pay = 7.5
		if self.age >= 21:
			rate_of_pay += 2.5

		return hours_work * rate_of_pay
class Sales( Employee ):
	def __init__(self, name, age, id, location, bonus):
		self.bonus = bonus
		super().__init__(name, age, id)
		self.location=location
	def get_bonus(self):
		return self.bonus * 0.5

def main():
	p = Person("Jeny", 22)
	print(p)
	print('_' * 50)
	e = Employee("Jean", 25, 57889)
	e.birthday()
	print("Pay: ", e.Calculate_pay(67))
	print('_' * 50)
	s= Sales("Jim", 54, 9578, "Cluj", 10)
	print(s)
	print('_' * 50)
	print(s.get_bonus()," ", s.Calculate_pay(78), " ")
	print('_'*30)
	s.birthday()
	print('_'*30)
	
main()