import java.io.*;

class Function {

    public static void main(String[] args) {

         //get primul argument
         String file_name = args[ 0 ];

         String file_name2 = args[ 1 ];

         //Scanner scan = new Scanner( System.in )
         //se creeaza un obiect de tip File

         //                     args[0]
         File obj = new File( file_name );

         File obj2 = new File( file_name2 );

         System.out.println("File name:" + obj.getName());

         System.out.println("Path :" + obj.getAbsolutePath());

         System.out.println("Parent :" + obj.getParent());

         System.out.println("SIZE = " + obj2.length());
System.out.println();
         System.out.println("is directory? = " + obj.isDirectory());
         System.out.println("is directory? = " + obj2.isDirectory());
System.out.println();
         System.out.println("Can Write = " + obj.canWrite());
         System.out.println("Can Write = " + obj2.canWrite());
System.out.println();
         System.out.println("Can Read = " + obj.canRead());
         System.out.println("Can Read = " + obj2.canRead());
    }
}
/* SE EXECUTA ASTFEL:
C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Meditație11.11.2023>javac Function.java

C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Meditație11.11.2023>java Function C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Meditație11.11.2023\New_fisier.txt New_fisier.txt

File name: New_fisier.txt
Path: C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Medita?ie11.11.2023\New_fisier.txt
Path: C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Medita?ie11.11.2023\New_fisier.txt
Parent: C:\Users\andre\OneDrive\Documente\Documentation\Noiembrie-2023\Medita?ie11.11.2023

SIZE = 9949
Is Directory? false
Can write? false
Can read? false
*/