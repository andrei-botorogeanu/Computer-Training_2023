import java.util.*;
public class MachineLearning {

       public static double findMode(double[] arr, int size) {

         double[] copy_arr = Arrays.copyOf( arr, arr.length );

         Arrays.sort( copy_arr );

         //reverse
         for(int i = 0, j= size - 1; i < size/2 - 1; i++) {
           
              double tmp = copy_arr[i];
              copy_arr[i] = copy_arr[j];
              copy_arr[j] = tmp;
              j--;
         }
/*
		0   1   2   3   4   5   6   7  8
cresc: 10  11  12  13  13  15  16  17 18
	   18  11  12  13  13  15  16  17 10
	...
desc:  18  17  16  15  13  13  12  11 10
*/
		double freq = 1;
         double tmp = 1;
         double mode = 0;

         for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(copy_arr[i] == copy_arr[j] && i != j) {
                      freq += 1;
                }
                if(tmp <= freq) {
                  mode = copy_arr[i];
                  tmp = freq;
                }
           }
           freq = 1;
         }
         return mode;
       }
 
    public static double findMean(double[] arr, int n) {
        double sum = 0;
        for(double element:arr) {
            sum += element;
        }
        return sum/n;
    }
    public static double findMedian(double[] arr, int size) {
              double[] copy_arr = Arrays.copyOf( arr, arr.length );
              Arrays.sort( copy_arr );
              return (size % 2 != 0) ? copy_arr[ size / 2 ] : (copy_arr[ size / 2 ] + copy_arr[ (size / 2)  - 1]) / 2.0;
       }
       public static void main(String[] args) {
            Scanner scan = new Scanner(System.in);
            int size = scan.nextInt();
            double[] speed = new double[size];

            //in c++: int speed[size];
            //in python: speed = [0] * size;

            for(int i = 0; i < size; i++) {
                speed[ i ] = scan.nextDouble();
            }
            scan.close();
            double ans;
            ans = findMean(speed, size);
            System.out.printf("%.1f\n", ans );
            ans = findMedian(speed, size);
            System.out.printf("%.1f\n", ans );
            ans = findMode(speed, size);
            System.out.printf("%d\n", (int)ans );
       }
}