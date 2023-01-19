import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    int n;
	    Scanner s = new Scanner(System.in);
	    int a[]=new int[n];
	    for(int i=0;i<n;i++){
	        a[i]=s.nextInt();
	    }
	    int i=0,j=n-1;
	    int mid;
	    int key;
	    
	    while(i<=j){
	        mid=(l+h)/2;
	        if(a[mid]==k){
	            System.out.println(mid);
	            break;
	        }
	        else if(a[mid]>k){
	            l=mid+1;
	        }
	        else{
	            h=mid-1;
	        }
	    }
	    
	}
}
