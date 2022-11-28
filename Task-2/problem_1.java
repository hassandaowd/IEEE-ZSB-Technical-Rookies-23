package second.task;

import java.util.Random;
import java.util.Scanner;

public class problem_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random rand = new Random();
        int rnum = rand.nextInt((999 - 100) + 1) + 100;
        System.out.println(" Write a number with 3 digit");
        int test = rnum;
        int ones = test%10;
        test /= 10;
        int tens = test%10;
        test /=10;
        int thos = test%10;
        int hit =0  , miss =0,flag=0;
        while (true){
            int nextNum = input.nextInt();
            if (rnum == nextNum && flag==0){
                System.out.println("You guessed the correct number at the first time XD ");
                break;
            }
            flag=1;
            int test1 = nextNum;
            int ones1 = test1%10;
            test1 /= 10;
            int tens1 = test1%10;
            test1 /=10;
            int thos1 = test1%10;
            if (ones == ones1) hit++;
            else miss++;
            if (tens == tens1) hit++;
            else miss++;
            if (thos == thos1) hit++;
            else miss++;
            if(hit==3){
                System.out.println("You guessed the correct number XD ");
                break;
            }
            System.out.println(hit+" hit  "+miss+" miss ");
            hit=0;
            miss=0;
        }
    }
}
