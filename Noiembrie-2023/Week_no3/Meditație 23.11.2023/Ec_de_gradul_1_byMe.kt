fun main(){
	var a: Double
	var b: Double
	var x: Double

	println("Introduceti valorile pt a si b:")
	a = readLine()!!.toDouble()
	b = readLine()!!.toDouble()

	if(a == 0.0) {
		if( b==0.0 ) 
			println("Ecuatia are o infinitate de solutii")
		else 
		println("Ecuatia nu are solutii")
	}
	else{
	if( b!=0.0 ) {
		x=-b/a
		println("Solutia ecuatiei este => x = $x") }
	else println("x = 0")
	}
}