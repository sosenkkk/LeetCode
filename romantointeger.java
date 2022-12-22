import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public int romanToInt(String s) {
        int len= s.length();
        char c;
        int sum=0;
        for(int i=0; i < len; i++){
            c=s.charAt(i);
            if(i<len-1 && ((c=='C' && (s.charAt(i+1)=='M'||s.charAt(i+1)=='D'))||(c=='X' && (s.charAt(i+1)=='L'||s.charAt(i+1)=='C'))||(c=='I' && (s.charAt(i+1)=='V'||s.charAt(i+1)=='X'))))
            {
                if(s.charAt(i+1)=='M'){
                    sum=sum+900;
                }
                else if(s.charAt(i+1)=='D'){
                    sum=sum+400;
                }
                else if(s.charAt(i+1)=='C'){
                    sum=sum+90;
                }
                else if(s.charAt(i+1)=='L'){
                    sum=sum+40;
                }
                else if(s.charAt(i+1)=='X'){
                    sum=sum+9;
                }
                else if(s.charAt(i+1)=='V'){
                    sum=sum+4;
                }
                i++;
            }
            else{
                if(c=='M'){
                    sum=sum+1000;
                }
                else if(c=='D'){
                    sum=sum+500;
                }
                else if(c=='C'){
                    sum=sum+100;
                }
                else if(c=='L'){
                    sum=sum+50;
                }
                else if(c=='X'){
                    sum=sum+10;
                }
                else if(c=='V'){
                    sum=sum+5;
                }
                else if(c=='I'){
                    sum=sum+1;
                }
            }
        }
        return sum;
    }
}
public class romantointeger {
    public static void main(String[] args) throws IOException{
        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        int ss= s.romanToInt(str);
        System.out.println(ss);
    }
    
}
