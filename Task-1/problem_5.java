package first.task;

import java.util.Scanner;

public class problem_5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long N , sum=0;
        System.out.println("Input :");
        N= input.nextLong();
        for (int i =1;i<=N;i++){
            if(i%3==0 || i%5==0)
                sum+=i;
        }
        System.out.println("Output :\n"+sum);
    }
}
