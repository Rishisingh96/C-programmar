import java.util.Scanner;
class Gross_Salary{
    
    public static void main(String[] args){
        int basic;
        float gross_salary;
        float da = 0;
        float hra =0;
        System.out.println("Enter basic salary :");
        Scanner obj = new Scanner(System.in);
        basic = obj.nextInt();

        if(basic<15000)
        {
            da = (90*basic)/100;
            hra = (10*basic)/100;
            
        }
        // da = daily_allownce
        // hra = house_rant
        else if(basic>=15000){
            da = (90*basic)/100;
            hra = 500;
        }
        gross_salary = basic + da + hra;
        System.out.println("\nGross salary : %d.2f "+gross_salary);
    }    
}