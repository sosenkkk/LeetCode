import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public boolean isUgly(int n) {
        double x=n;
        int c=2, b=1;
        while(x>1 && c<=5){
            if(x%c==0){
                x=x/c;
            }
            else{
                c=c+b;
                b++;
            }
        }
        if(x==1)
            return true;
        else
            return false;
    }
}
public class uglynumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Print a1");
        int size1= Integer.parseInt(br.readLine());
        Solution s= new Solution();
        boolean a= s.isUgly(size1);
        System.out.println(a);
    }
}
