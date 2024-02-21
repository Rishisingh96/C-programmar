import java.util.Scanner;
public class Arithmatic_formula {
    public static void main(String args[]){
    int a,b,A,B,C;
    System.out.println("Enter your number:");
    Scanner i = new Scanner(System.in);
    a = i.nextInt();
    b  = i.nextInt();
    A=(a+b)*(a+b);
    B=(a+b)*(a+b)*(a+b);
    C=(a*a-b*b);
System.out.println("(a+b)^2 ="+A+" \n(a+b)^3 ="+B+" \n(a^2-b^2)="+C+"\n");
}
}
