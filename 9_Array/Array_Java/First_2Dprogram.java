public class First_2Dprogram {
    // Using a 2D array:
    /* 
    public static void main(String[] args) {
        int[][] matrix = { {1, 2}, {3, 4} };
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    */

    // Using nested loops:
    // public static void main(String[] args) {
    //     int[][] matrix = new int[2][2];
    //     matrix[0][0] = 1;
    //     matrix[0][1] = 2;
    //     matrix[1][0] = 3;
    //     matrix[1][1] = 4;

    //     for (int i = 0; i < 2; i++) {
    //         for (int j = 0; j < 2; j++) {
    //             System.out.print(matrix[i][j] + " ");
    //         }
    //         System.out.println();
    //     }
    
    // }

    // Using a StringBuilder:
        // public static void main(String[] args) {
        //     int[][] matrix = { {1, 2}, {3, 4} };
        //     StringBuilder sb = new StringBuilder();
            
        //     for (int i = 0; i < 2; i++) {
        //         for (int j = 0; j < 2; j++) {
        //             sb.append(matrix[i][j]).append(" ");
        //         }
        //         sb.append("\n");
        //     }
            
        //     System.out.println(sb.toString());
        // }
    
       
            public static void main(String[] args) {
                int[][] matrix = { {1, 2}, {3, 4} };
                printMatrix(matrix);
            }
            
            public static void printMatrix(int[][] matrix) {
                for (int i = 0; i < matrix.length; i++) {
                    for (int j = 0; j < matrix[0].length; j++) {
                        System.out.print(matrix[i][j] + " ");
                    }
                    System.out.println();
                }
            }
        
        
}
