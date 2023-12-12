class Student(var nume: String, var prenume: String, var salary: Int)
{//2 metode membre si 3 date membre
	fun gender(gen: String){
		println("gender"+ " " + gen) }
	fun hobby(passion: String){
		println("The hobby"+ " " + passion) }	
}

fun main()
{
	val student1 = Student("miruna","Cune",1999)
	val student2 = Student("ciprian","Stan",100)
// Am creat 2 obiecte de tip student
	println(student1.nume)
	println(student2.nume)

	student1.hobby("fotbal")
	student2.hobby("tennis de camp")	

	student1.gender("femeie")
	student2.gender("barbat")

}