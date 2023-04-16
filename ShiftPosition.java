
import java.util.*;
class ShiftpositionoddEven {
    public static void main(String[] args) {
        int a[] = new int[]{1,2,3,4,5};
        List<Integer> odd = new ArrayList<Integer>();
        List<Integer> even =  new ArrayList<Integer>();
        for(int i=0;i<a.length;i++){
            if(i%2==0)
                odd.add(a[i]);
            else
                even.add(a[i]);
        }
        Collections.sort(odd);
        Collections.sort(even);
        int op[] = new int[a.length];
        int evenindex = 0;
        int oddindex = odd.size()-1;
        for(int i=0;i<op.length;i++){
            if(i%2==0){
                op[i]=odd.get(oddindex);
                oddindex--;
            }
            else{
                op[i] = even.get(evenindex);
                evenindex++;
            }
        }
        System.out.println(Arrays.toString(op));
    }
}
