import java.util.*;  

public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World\n");
		//Write a program  Java to take two no. from user and show addition, subtraction, multiplication and division.
		Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
		System.out.print("Enter first number- ");  
        int a= sc.nextInt();  
        System.out.print("Enter second number- ");  
        int b= sc.nextInt(); 
        int c = a+b;
        System.out.println("Addition is " + c);
        c = a-b;
        System.out.println("Subtraction is " + c);
        c = a*b;
        System.out.println("multiplication is " + c);
        float z = (float) a/b;
        System.out.println("Addition is " + z);
	}
}
