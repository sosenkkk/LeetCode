import java.io.*;

class Solution {
    public String reverseWords(String s) {
        String str="", st= "";
        char c;
        for(int i=0; i< s.length(); i++){
            c= s.charAt(i);
            if(Character.isWhitespace(c)==true){
                str= str+ st +" ";
                st= "";
            }
            else{
                st= c+st;
            }
        }
        return str+st;
    }
}

public class reversestring {
    public static void main(String[] args)throws IOException {
        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String ss= br.readLine();
        String sss;
        sss= s.reverseWords(ss);
        System.out.println("|"+sss+"|");

    
    }
}