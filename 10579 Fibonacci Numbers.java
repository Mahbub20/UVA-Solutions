import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[]args)
    {
    	Scanner sc = new Scanner(System.in);
    	int n;
    	while(sc.hasNext())
    	{
    		n = sc.nextInt();
    		BigInteger a = BigInteger.ONE;
    		BigInteger b = BigInteger.ONE;
    		BigInteger sum = BigInteger.ZERO;
    		while(n>=3)
    		{
    			sum = a.add(b);
    			b = a;
    			a = sum;
    			n--;
    		}
    		System.out.println(sum);
    	}
    }
}
