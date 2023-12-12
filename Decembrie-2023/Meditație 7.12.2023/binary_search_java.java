import java.util.*;

public class binary_search_java{
	public static void main(String[] args)
	{
		int[] arr = {67,4,3,234,1232,4,54,6,67,2,3,23,231,3};
		int target = 54;
		int answer = bs(arr, target);
		System.out.print("The element " + target + " there is at index " + answer);
		
	}
	public static int bs(int[] arr, int target){
		int n = arr.length;
		int low=0,
			high = n-1,
			middle = (low + high)>>1; 
		while(low <= high) {
			if(arr[middle] == target) 
				return middle;
			else if(arr[middle] > target)
				high= middle-1;
			else
				low = middle+1;
		} 
		return -1;
	}
}