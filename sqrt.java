import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public int mySqrt(int x) {
        double i=0;
        for(i=0; i <= x; i++){
            System.out.println("h");
            if(x < (i*i)){
                break;
            }
        }
        return (int)i-1;
    }
}
public class sqrt {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int str= Integer.parseInt(br.readLine());
        Solution s = new Solution();
        int ss = s.mySqrt(str);
        System.out.println(ss);
    }
    
}
