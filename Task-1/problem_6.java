package first.task;

import java.util.Scanner;

public class problem_6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long X ,Y ,min,max,GCD=1;
        System.out.println("Input :");
        X= input.nextLong();
        Y= input.nextLong();
        if(X>=Y){
            min=Y;
            max=X;
        }
        else {
            min=X;
            max=Y;
        }
        for (int i =1;i<=min;i++){
            if(min%i==0 && max%i==0)
                GCD =i;
        }
        System.out.println("Output :\n"+GCD);
    }
}
