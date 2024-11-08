import java.util.Scanner;

public class Assignment1 {
    
    
    

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int max = 0;
        int min = 0;
        int sum = 0;
        int count = 0;
        
        while(true){
            System.out.println("Enter a positive integer, 0 to exit");
            int num = scan.nextInt();
            
            if(num<0){
                System.out.println("Negative values are ignored");
                continue;
            }
            if(num == 0)
                break;
            
            sum+=num;
            count++;
            
        }
        
        System.out.println("Maximum value is: " + max);
        System.out.println("Minimum value is: " + min);
        System.out.println("Sum of all numbers is: " + sum);
        System.out.println("Average of all numbers is: " + (1.0)*sum/count);
    }
    
    
    
    
    
    
}
