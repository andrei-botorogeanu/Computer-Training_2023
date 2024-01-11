import java.util.Arrays;

public class sortSelectMin {

       public static void main(String[] args) {

         int[] arr = { 7, 6, 5, 4, -3, 2, 1, 0 };

         //System.out.println("Sorted Array" + Arrays.toString( arr ) );
         System.out.println("Initial Array");

         DisplayArray( arr );

         selectionSort( arr );

         System.out.println("Sorted Array" + Arrays.toString( arr ) );
       }

       //algoritmul de sortare prin selectia minimului
       public static void selectionSort( int[] arr ) {

              //luam lungimea vectorului
              int n = arr.length;

              for(int i = 0; i < n - 1; ++i) {
                    //presupunem ca indexul curent este pe pos min
                    int minIndex = i;
                    //cautam indexul elementului nim din partea nesortata
                    for(int j = i + 1; j < n; ++ j) {
                      if(arr[j] < arr[minIndex]) {
                        minIndex = j;
                      }
                    }

                    int temp = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = temp;
              }
       }

       public static void DisplayArray(int[] vec) {

               for(int value: vec) {

                  System.out.print(value + " ");
               }

               System.out.println();
       }
}
+