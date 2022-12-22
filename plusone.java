import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public int[] plusOne(int[] digits) {
        int len= digits.length - 1;
        if(digits[len]<9){
            digits[len]= digits[len] + 1;
            return digits;
        }
        else{
            while(digits[len] == 9 && len>0){
                digits[len]= 0;
                len--;
            }
            digits [len]= digits[len]+1;
            if(digits[len]==10){
                int [] arr = new int[digits.length+1];
                arr[0]= 1;
                return arr;
            }
            else{
                return digits;
            }
        }
    }
}

public class plusone{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Solution s = new Solution();
        int n= Integer.parseInt(br.readLine());
        int arr[]= new int[n];
        for(int i=0; i<n; i++){
            arr[i]= Integer.parseInt(br.readLine());
        }
        int[] ss= s.plusOne(arr);
        for(int i : ss)
            System.out.println(i);
    }
    
}
