/*Swing pentru Java
  este Tkinter pentru Python, Graphical User Interface*/
//import java.io.*;
import javax.swing.*;

// Main class
class App_calculator {
 
    // Main driver method
    public static void main(String[] args)
    {
        JFrame frame = new JFrame(); // creating instance of JFrame
 
        JButton button = new JButton("My Button"); // creating instance of JButton
        button.setBounds( 50, 100, 220, 50); // x axis, y axis, width, height
        frame.add(button); // adding button in JFrame
        frame.setSize(400, 600); // 400 width and 500 height
        frame.setLayout(null); // using no layout managers
        frame.setVisible(true); // making the frame visible
        JButton button2 = new JButton("The second button");
        JTextField text = new JTextField("Textfield");
        text.setBounds(100, 200, 300, 50);
        frame.add(text);
    }
}