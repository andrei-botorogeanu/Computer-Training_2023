import java.util.*;

public class array {

	public static void main(String args[])
{
//	Scanner scan = new Scanner(System.in);
		String[] array={"xxx","yyy","zzz"};
		System.out.println( array[0] );
		System.out.println(array.length);
//VAR 1:
		for( int i=0; i<array.length; i++ )	
			System.out.println(array[i]);
//VAR 2:
		for(String i: array){
		System.out.println( i );		
		}
		System.out.println();		

		int [][]matrix={ {1,2,3},{4,5,6} };
		for(int i=0; i<matrix.length; i++)
		{
			for(int j=0; j<matrix[i].length; j++)
				System.out.print(matrix[i][j]+ " ");	
			System.out.println();	
		}
		System.out.println();
	int n=6;
	switch(n) {
	case 1: System.out.println("cazul 1");
		break;
	case 2:  System.out.println("cazul 2");
		break;
	case 3:  System.out.println("cazul 3");
		break;
	case 4:  System.out.println("cazul 4");
		break;
	case 5:  System.out.println("cazul 5");
		break;
	default:
		System.out.println("Invalid input!");
	}
	final int a=20;
	System.out.println(a);		
}	
}