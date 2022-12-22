import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public String pushDominoes(String dominoes) {
        int len = dominoes.length();
        String s = dominoes;
        String ss="";
        int c=0, k=0;
        for(int i=0; i<len; i++){
            if(s.charAt(i)=='R' && c==0;){
                c++;
                for(int j=i; j< len; j++){
                    if(s.charAt(j)=='L'){
                        c=0;
                        int v= (j-i+1)/2;
                        for(int p=0; p < v/2; p++){
                            ss= ss+"R";
                        }
                    }
                }
            }
            if(s.charAt(i)=='L' && c==0){
                for(int j=k; j<=i; j++){
                    ss= ss+"L";
                }
            }
        }
        return ss;
    }
}
public class dominoes {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        Solution s = new Solution();
        String ss = s.pushDominoes(str);
        System.out.println(ss);
    }
    
}
