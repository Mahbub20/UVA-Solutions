/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      int N,A;
        BigInteger sum,tmp;
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            N = input.nextInt();
            A = input.nextInt();
            
            sum = new BigInteger("0");
            tmp = BigInteger.valueOf(A);
            
            for(int i = 1;i<=N;i++)
            {
                sum = sum.add(BigInteger.valueOf(i).multiply(tmp.pow(i)));
            }
            System.out.println(sum);
        }  
   
    }
    
}
