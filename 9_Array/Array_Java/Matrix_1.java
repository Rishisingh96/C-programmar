import java.util.*;
public class Matrix_1 {
    public static void printMatrix(int Matrix [][] ){
        //print the matrix
        for(int i = 0; i<Matrix.length; i++){
            for (int j=0;j<Matrix[0].length;j++){
                System.out.print(Matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        int [][] Matrix = new int[2][2];
        //Input the Matrix elements
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                System.out.println("Enter 2 * 2 element position(" + (i+1)+"," + (j+1)+"):");
                Matrix[i][j] = sc.nextInt();
            }
        }
        // Print the matrix
        System.out.println("The 2*2 matrix is :");
        printMatrix(Matrix);
    }
}
