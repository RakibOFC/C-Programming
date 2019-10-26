package hackerranklooptwo;

import java.util.Scanner;

public class HackerRankLoopTwo {

    public static void main(String[] argh) {

        Scanner in = new Scanner(System.in);

        int i, j, s, s2, x, t = in.nextInt();

        for(i = 0; i < t; i++) {

            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            s2 = 0;
            x = 1;

            for (j = 0; j < n; j++) {

                s = (x * b) + s2;
                System.out.print(+s+a+ " ");
                s2 = s;
                x = x * 2;
            }
            System.out.println();
        }
        //in.close();

        for (i = 0; i < t; i++) {

        }
    }
}
