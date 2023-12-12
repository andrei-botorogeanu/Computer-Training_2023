//ecuatia de gradul 1
//ax + b = 0
// daca a = 0 si b = 0 atunci ecuatia are o infinitate de solutii
// daca a = 0 si b != 0 atunci ecuatia nu are solutii
// daca a != 0 si b != 0 atunci x = -b/a

fun main() {
      var a: Double //declari o variabila de tip Double
      var b: Double //b de tip double
      var x: Double //c de tip double

      println("Introduceti valorile pentru a si b")
      a = readLine()!!.toDouble(); // citeste valoarea pentru variabila a si o converteste la double
      b = readLine()!!.toDouble(); // citeste valoarea pentru variabila b si o converteste la double
   
/*  Asa se citeste o linie in Kotlin  a = readLine()!!.toDouble()
   pe care o converteste la Double
*/
      if(a == 0.0) {
          if(b == 0.0) {
             println("Ecuatia are o infinitate de solutii!")
          } else {
            //adica a == 0 si b este != 0
             println("Ecuatia nu are solutii")
          }
      } else {
         //adica a != 0
         if(b != 0.0) {
             x = -b/a
             println("Solutia ecuatiei este => x = $x")
         } else {
              println("x = 0")
         }
      }

}