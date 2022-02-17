import java.io.*;
import java.util.*;

public class Solution {
    public static int onecomp(int n)
    {
        int b= (int)(Math.floor(Math.log(n) /Math.log(2))) + 1;
        return ((1<<b)-1)^n;
    }

    public static void main(String[] args) {
        Scanner kv=new Scanner(System.in);
        int t=kv.nextInt();
        while(t-->0)
        {
            int n=kv.nextInt();
                                  
            System.out.println(n*onecomp(n));
        }
    }
}