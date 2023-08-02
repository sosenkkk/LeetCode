import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public boolean isPalindrome(int x) {
    int y;
    int r=x;
    int p=0;
    if(x<0)
        return false;
    else{
        while(r>0){
        y= r%10;
        p=p*10 + y;
        r=r/10;
        }
        if(p==x)
            return true;
        return false;
    }
    }
}
public class ispalindrome {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(br.readLine());
        Solution s= new Solution();
        boolean a= s.isPalindrome(x);
        System.out.println(a);
    }
}
