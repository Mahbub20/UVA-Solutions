/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author mahbub
 */
 class Main {

   
    public static void main(String[] args) {
         Scanner cin = new Scanner(System.in);
         String num1,num2;
         while(cin.hasNext())
         {
             num1 = cin.next();
             num2 = cin.next();
             BigInteger bi1 = new BigInteger(num1);
             BigInteger bi2 = new BigInteger(num2);
             BigInteger product = bi1.multiply(bi2);
             System.out.println(product.toString());
         }
    }
    
}
