import java.lang.io;
import java.util.*;

public class ReverseInteger
{
    public static void main(String[] args)
    {
            System.out.println("Enter a number to reverse:");
            Scanner sc = new Scanner(System.in);
            int input = sc.nextInt();
            int reverse=0, temp;
            temp= input;
            while (input!=0) {
                int digit = input%10;
                reverse = reverse *10+digit;
                input = input/10;
                
            }
            System.out.println("The reverse of "+temp+" is :"+ reverse);
    }
}