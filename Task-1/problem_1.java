package first.task;
import java.util.Scanner;
public class problem_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long x ,y ;
        System.out.println("Input :\n");
        x= input.nextLong();
        y=input.nextLong();
        System.out.println("Output :\n"+x*y);
        System.out.println(2*(x+y));
    }
}
