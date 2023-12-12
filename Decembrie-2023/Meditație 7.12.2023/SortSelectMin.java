import java.util.Arrays;

public class SortSelectMin {
	public static void main(String[] args){
		int[] arr={9, 8, 7, 6, 5, 4, -6, -3, -1};
		System.out.println("Initial Array");
		DisplayArray( arr );
		selectionSort(arr);
		System.out.println("Sorted Array" + Arrays.toString(arr) );
	}
	public static void selectionSort(int[] arr){
		int n = arr.length;
		for(int i=0; i<n-1; i++){
			int minIndex=i;
			for(int j=i+1; j<n; j++){
				if( arr[j]<arr[minIndex] )
					minIndex = j;
			}
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	public static void DisplayArray(int[] vec) {
		for(int value: vec)
			System.out.print(value + " ");
		System.out.println();
	}
} 