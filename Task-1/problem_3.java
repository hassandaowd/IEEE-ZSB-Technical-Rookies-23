package first.task;

import java.util.Scanner;

public class problem_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x ;
        System.out.println("Input :");
        x= input.nextInt();
        int []y =new int[x];
        for (int i=0;i<x;i++) {
            y[i]=input.nextInt();
        }
        System.out.println("Output :\n"+forLoopSum(y));
        System.out.println(whileLoopSum(y));
        System.out.println(recursionSum(y,x));
    }

    private static int recursionSum(int[] y,int x) {

        if(x!=0){
            int sum= y[x-1]+recursionSum(y,(x-1));
            return sum;
        }else{
            return 0;
        }
    }

    public static int forLoopSum (int []y){
        int sum=0;
        for (int i=0 ; i<y.length ;i++){
            sum+=y[i];
        }
        return sum;
    }

    public static int whileLoopSum (int []y){
        int sum=0;
        int i=y.length;
        while(i>0){
             sum+=y[i-1];
             i--;
        }
        return sum;
    }

}
