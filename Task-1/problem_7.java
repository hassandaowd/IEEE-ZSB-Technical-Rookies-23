package first.task;

import java.util.Scanner;

public class problem_7 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long N ,digit,A,sum=0;
        System.out.println("Input :");
        N= input.nextLong();
        A=N;
        while (A>0){
            digit =A%10;
            sum = (sum*10)+digit;
            A/=10;
        }
        System.out.println("Output :\n"+sum);
        if(sum==N)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
