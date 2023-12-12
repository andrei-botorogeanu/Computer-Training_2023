import java.util.*;
//"*" inseamna orice, importa absolut tot din java.util
//nextInt este o metoda care se afla in java.util.Scanner
public class SqrtNumber_byMe {
// numele programului identic cu numele clasei
	public static double sqrt_babylon(int n)
	{
/*Free static:
error: non-static method sqrt_babylon(int) cannot be referenced from a static context
                double answear = sqrt_babylon(n);
*/
		double x = n;
		double y = 1;        
		double eps = 0.00000001;

		while(x - y > eps) {
			x= (x+y)/2;
			y = n / x;
		}
		return x;
	}
	public static void main(String args[]) {
	//READ:
		Scanner scan  = new Scanner(System.in);
		System.out.print("Introduceti un numar = ");
		int n = scan.nextInt();
		double answear = sqrt_babylon(n);
		System.out.println("Square Root of the number = " + answear);
	}
}