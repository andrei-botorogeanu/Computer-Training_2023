public class QuickSort {
	public static void main(String[] args) {
		int[] arr = {9, 8, 7, 6, 5, 4, 3, 2, 2, -3, 0};
	System.out.println("Vectorul initial:");
	display(arr);
	quicksort(0, arr.length-1, arr);
	System.out.println("Vectorul sortat:");
	display(arr);
	}

	public static void quicksort(int low,int high,int arr[])
{
			int i= low,
			j = high,
			pivot = arr[(low+high)>>1];
		while(i<=j){
			while(arr[i]<pivot) 
				i++;
			while(arr[j]>pivot)
				j--;
			if(i<=j){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++; j--;
			}
		}
		if(low<j) quicksort(low, j, arr);
		if(i<high) quicksort(i,high, arr);
	}
	public static void display(int[] arr){
		for(int value: arr)
			System.out.print(value+ " ");
		System.out.println();
	
	}
}