import java.util.*; 

public class LinearSearch {
	
	public static int linear_search(int[] arr, int target) {
		for(int index=0; index<arr.length; ++index) 
			if(arr[index]==target)
				return index;
		return -1;
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int target = scan.nextInt();

		int[] array = new int[100];
		
		for(int i=0; i<n; i++)
			array[i] = scan.nextInt();

		int answer = linear_search(array, target );
		
		if(answer != -1)
			System.out.println("Element " + target + " found at index " + answer);
		else 
			System.out.println("Element " + target + " not found!" );
	}
}