/*
 * Compilare:
 * javac numeprogram.java
 * java numeprogram
 */
import java.util.*;

public class SqrtNumber {

       public static double sqrt_babylon(int n) {

              double x = n;
              double y = 1;
              double eps = 0.00001;

              while(x - y > eps) {
                  x = (x + y) / 2;
                  y = n / x;
              }
              return x;
       }

       public static void main(String args[]) {

         //in c++: cin>>n
      //in python: n = input("n=")
       Scanner scan = new Scanner(System.in);

       //in c++: cout<<"Introduceti un numar = "
       //in python3: n = input("Introduceti un numar")
       System.out.print("Introduceti un numar = ");

       int n = scan.nextInt();

       double answer = sqrt_babylon(n);

       //in c++: cout<<"Square Root of the number = "
       //in python: print("Square Root of the number = ")
       //in c: printf("%d", answer)
       System.out.println("Square Root of the number = " + answer);
       }
}
