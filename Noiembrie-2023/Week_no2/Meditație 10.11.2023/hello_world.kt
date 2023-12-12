fun myFunction(x: Int, y:Int) = x+y
//short hand

fun main(){
	var auxiliar = myFunction(1, 1)
	println( auxiliar )


	println("hello world")
	var myText: String = "Andrei"
	val a: Int = 5
	val b: Double = 4.55
	val myLetter:Char = 'Y'
	println(a)
	println(b)
	println(myLetter)
	println(myText)
	if(a > b) {
	println("a is greater than b")
	}

	val x = 3
	val result = when(x) {
	1->"house"
	2->"car"
	3->"yyy"
	4->"zzz"
	else -> "Invalid comand"
	} 
	println(result)
	var i = 0
	while(i<10) {
		println(i)
		i++
	}
val numbers=arrayOf("One","Two","Three","Four")
	println(numbers[0])
	println(numbers[3])
	println(numbers.size)

	for(num in 2..10){
		if(num==9) {continue}
	println( num )
	}

val numbers_i = arrayOf("one","two","three")
	
	if("one" in numbers_i) {
	println("IT exists")
	}
	else {
	println("Not exist")
	}

	var txt ="3456546fghdjnssaf"
	println(txt.length)
	var text = "Hello world! How are you"
	println(text.indexOf("world"))
//Afiseaza indexul de unde incepe "world"
println()
	for(num in 2..15) {
	if( num==6 ) break
	println(num)
	}
println()
val mabel =true
val label =false

println(mabel)
println(label)
}
