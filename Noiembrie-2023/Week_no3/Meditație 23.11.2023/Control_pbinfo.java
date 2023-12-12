/* Dependente: java.util.Scanner
 *  Author: Andrei Botorogeanu
 *  Description: Cifra de Control
 *  Date: _______________________
 *  License Copyright: __________________
 *
 *  Filename: Control.java
 *  Compilare :javac Control.java
 *  Rulare: java Control
 */
import java.util.Scanner;

public class Control {

     public static void main(String args[]) {

             int n ;

             Scanner scan = new Scanner( System.in );

             n = scan.nextInt();

             if( n % 9 != 0 ) {

                 System.out.println( n % 9 );

             } else {

                 System.out.println( 9 );
             }

             scan.close();
     }
}