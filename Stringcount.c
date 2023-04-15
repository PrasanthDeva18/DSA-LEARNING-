//Print the string for given occurrence of the time 
import java.util.*;
import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String s1 =s.nextLine();
        String num= "";
        char letter =' ';
        for(char c : s1.toCharArray()){
            if(!(c>='0' && c<='9')){
                if(num != ""){
                    int n = Integer.parseInt(num);
                    for(int i=0;i<n;i++){
                        System.out.print(letter);
                    }
                }
                letter=c;
                num="";
            }
            else{
                num=num+c;
            }
        }
       int n = Integer.parseInt(num);
       for(int i=0;i<n;i++){
            System.out.print(letter);
       }
    }
}
