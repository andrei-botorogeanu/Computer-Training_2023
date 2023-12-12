public class binary_search_recursiv {
	public static void main(String[] args){
		int[] vec = {12, 13, 23, 45, 46, 56, 67, 78 , 89, 90};
		int target=89;
		int low = 0, high = vec.length-1; 
		int answer = bs_reach(vec, target, low, high);
		
		if(answer!=-1)
			System.out.print("The element " + target + " there is " + answer);
		else
			System.out.print("The element " + target + " no exist ");
	}

	public static int bs_reach(int[] arr, int target, int low, int high){
		
		if( low <= high ) {
			int middle = (low+high)>>1 ;
			if(arr[middle] == target)
				return middle;
			else if(arr[middle]>target)
				return bs_reach(arr, target, low, middle-1);
			else 
				return bs_reach(arr, target, middle+1, high);
		}
		return -1;
	}
}