import java.util.*;
public class Teorema_fundamentala_a_aritmeticii{
	public static void main(String[] args){
		Scanner scan = new Scanner( System.in );
		int n = scan.nextInt();
		System.out.println("Teorema Fundamentala a Aritmeticii:\n");
		int i = 2;
		while (!(n==1)){
			int fm = 0;
			while(n%i==0){
				fm +=1;
				n/=i;
			}
			if( fm!=0 )
				System.out.println(i + "^"+ fm);
			i++;
		}
	}
}