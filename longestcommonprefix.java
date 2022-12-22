import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        String str="";
        String s= strs[0];
        int p= s.length();
        for(int i=0; i<p;i++){
            int count=0;
            for(int j=0; j<strs.length; j++){
                if(strs[j].startsWith(s)==true){
                    count++;
                }
            }
            if(count==strs.length){
                System.out.println(count);
                str=s;
                break;
            }
            else{
                s=s.substring(0, p-1-i);
            }
        }
        return str;
    }
}
public class longestcommonprefix {
    public static void main(String[] args) throws IOException {
        

        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int i=Integer.parseInt(br.readLine());
        String str[]=new String[i];
        for (int j=0; j<i; j++)
            str[j]=br.readLine();
        String ss= s.longestCommonPrefix(str);
        System.out.println(ss );
    }
}
