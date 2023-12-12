import java.util.*;

public class class_euclid {

	public static int euclid(int a, int b)
	{
		while(a!=b)
		{
			if(a>b) a=a-b;
			else b=b-a;
		}
		return b;
	}
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Introduceti a si b: ");
		int a = scan.nextInt();
		int b = scan.nextInt();
		int answear = euclid(a, b);
		System.out.print("Euclid: " + answear);
	}
}