import java.util.Scanner;
public class Dollars {
     public static void main(String args[]) {          
          int totalCents, quarters, dimes, nickels, pennies;
          Scanner keyboard = new Scanner( System.in );
          totalCents = keyboard.nextInt();
            
          quarters = totalCents / 25;
          totalCents = totalCents  % 25;
          dimes = totalCents / 10;
          totalCents = totalCents % 10;
          nickels = totalCents / 5;
          totalCents = totalCents % 5;
          pennies = totalCents;
          System.out.println("You can exchange this into: ");
          System.out.println("Quarters = "+ quarters);
          System.out.println("Dimes= "+ dimes);
          System.out.println("Nickels= "+ nickels);
          System.out.println("Pennies= "+ pennies);
/* system.in este fluxul de intrare, Scanner este clasa,      
}
}