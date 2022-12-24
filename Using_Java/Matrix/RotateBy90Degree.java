package Matrix;
import java.util.Scanner;

public class RotateBy90Degree {
    // to print final answer
    public static void display(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + "   ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        try (Scanner scn = new Scanner(System.in)) {
            int n = scn.nextInt();
            int arr[][] = new int[n][n];

            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr[0].length; j++) {
                    arr[i][j] = scn.nextInt();
                }
            }

            // main code

            // for (int j = 0; j < arr.length; j++) {
            // for (int i = arr[0].length-1; i >= 0; i--) {
            // System.out.print(arr[i][j]+ " ");
            // }
            // System.out.println();
            // }

            // Transpose
            for (int i = 0; i < arr.length; i++) {
                for (int j = i; j < arr[0].length; j++) {
                    int temp = arr[i][j]; // i -> j and j -> i
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
            }

            // Reverse
            for (int i = 0; i < arr.length; i++) {
                int li = 0;
                int ri = arr[i].length - 1;
                while (li < ri) {
                    int temp = arr[i][li];
                    arr[i][li] = arr[i][ri];
                    arr[i][ri] = temp;

                    li++;
                    ri--;
                }
            }
            display(arr);
        }
    }
}
