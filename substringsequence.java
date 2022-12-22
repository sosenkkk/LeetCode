import java.io.*;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        String str="";
        String sstr="";
        int len=0;
        int count=0;
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<=s.length(); j++){
                str=s.substring(i,j);
                for(int k=0; k < str.length(); k++){
                    for(int l=k+1; l< str.length(); l++){
                        if(str.charAt(k)!=str.charAt(l)){
                            count++;
                        }
                    }
                    if(count==str.length() && str.length()>len){
                        len=str.length();
                    }
                }
            }
        }
        return len;
    }
}
public class substringsequence {
    public static void main(String[] args)throws IOException {

        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        int ss= s.lengthOfLongestSubstring(str);
        System.out.println(ss);
    
    }
}
