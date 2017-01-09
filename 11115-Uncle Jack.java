import java.math.BigInteger;
import java.util.Scanner;

public class Uncle_jack {
	public static void main(String [] args)
	{
		 int n,m;
		 BigInteger result;
		 Scanner sc = new Scanner(System.in);
		 while(true)
		 {
			 n = sc.nextInt();
			 m = sc.nextInt();
			 if(n==0 && m==0)break;
			 BigInteger _n = new BigInteger(n+"");
			 result = _n.pow(m);
			 System.out.println(result);
		 }	
	}
}
