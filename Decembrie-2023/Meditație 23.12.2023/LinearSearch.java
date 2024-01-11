public class LinearSearch {

       public static int linearsearch(int[] arr, int target) {

               for(int index = 0; index < arr.length; ++index) {

                 if(arr[ index ] == target) {

                   return index;
                 }

               }
               return -1;
       }

       public static void main(String[] args) {

              int[] arr = { 10, 44, 102, 234, -10, 101, 892 };

              int targetElement = 44;

              int answer = linearsearch( arr, targetElement );

              if( answer != -1 ) {

                System.out.println("Element " + targetElement + " found at index: " + answer);

              } else {

                System.out.println("Element " + targetElement + " Not Found!");
              }
       }
}
