package first.task;

import java.util.Scanner;

public class problem_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long N , fact=1;
        System.out.println("Input :");
        N= input.nextLong();
        for (int i=1 ; i<=N;i++)
        {
            fact*=i;
        }
        System.out.println("Output :\n"+fact);
    }
}
