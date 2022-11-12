package first.task;

import java.util.Scanner;

public class problem_4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long N , sum=0;
        System.out.println("Input :");
        N= input.nextLong();
        for (int i =1;i<=N;i++){
            sum+=i;
        }
        // to get sum with one step =>>> without for loop ==>>> sum= N*(N+1)/2;
        System.out.println("Output :\n"+sum);
    }
}
