import java.util.*;

public class StandardDeviation_HackerRank {
	private static double getMean(int[] arr  ){
		int s = 0;
		for( int i=0; i<arr.length; i++)
			s += arr[i];
		double average = (double)s / arr.length;
		return average;
	}	

	private static double getStandardDev(int aux, int n){
			int s=0; 
			double div, rid_sqrt; 
			for( int i=0; i<n; i++)
			{
				 div = arr[i]- aux;
					rid_sqrt = div*div;
					s += rid_sqrt;
			}
			return s/n;
	}

	public static void main(String[] args){
		Scanner scan = new Scanner(System.in); 

		int n = scan.nextInt();
		int[] arr = new int[n];
		
		for( int i=0; i<n; i++)
			arr[i] = scan.nextInt();
		scan.close();
		int aux = getMean(arr);
		System.out.printf("%.2f", getStandardDev( aux, arr.length ) );
	}
}