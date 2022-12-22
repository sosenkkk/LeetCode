import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public String addBinary(String a, String b) {
        int car=0;
        String c="", rest="";
        int lena= a.length()-1;
        int lenb= b.length()-1;
        while(lena>=0 && lenb>=0){
            if(a.charAt(lena)=='1' && b.charAt(lenb)=='1'){
                if(car==1){
                    c="1"+c;
                    car=1;
                }
                else{
                    c="0"+c;
                    car=1;
                }
            }
            else if((a.charAt(lena)== '1' && b.charAt(lenb)== '0') || (a.charAt(lena)=='0' && b.charAt(lenb)=='1')){
                if(car==1){
                    c="0"+c;
                    car=1;
                }
                else{
                    c="1"+c;
                    car=0;
                }
            }
            if(a.charAt(lena)=='0' && b.charAt(lenb)=='0'){
                if(car==1){
                    c="1"+c;
                    car=0;
                }
                else{
                    c="0"+c;
                    car=0;
                }
            }
            lena--;
            lenb--;            
        }
        int len;
        if(lena<lenb){
            len=lenb;
            rest =b;
        }
        else{
            len = lena;
            rest = a;
        }
        System.out.println(len + rest);
        for(int i = len; i>=0; i--){
            if(car==1){
                if(rest.charAt(i)=='0'){
                    c="1"+c;
                    car=0;
                }
                else{
                    c="0"+c;
                    car=1;
                }
            }
            else if(car==0){
                if(rest.charAt(i)=='0'){
                    c="0"+c;
                    car=0;
                }
                else{
                    c="1"+c;
                    car=0;
                }
            }
        }
        if(car==1){
            return "1"+c;
        }
        else
            return c;
    }
}

public class addbinary {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String a= br.readLine();
        String b= br.readLine();
        Solution s = new Solution();
        String ss = s.addBinary(a, b);
        System.out.println(ss);
    }
    
}
//"1001010100"
// "110010"