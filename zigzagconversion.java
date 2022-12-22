import java.io.*;
class Solution {
    public String convert(String s, int numRows) {
        int k= 2*numRows - 2;
        String str="";
        for(int i= 0; i < numRows; i++){
            for(int j=i; j < s.length(); j = j + k -2*i){
                if(i==0 || i== numRows-1){
                    System.out.println("hi");
                    if((j+2) < s.length()){
                        str= str + s.charAt(j);
                        break;}
                }
                else{
                    System.out.println("h");
                    str= str + s.charAt(j);
                    if(j+2< s.length())
                        str= str + s.charAt(j+2);
                }
            }
        }
        return str;
    }
}
public class zigzagconversion {
    public static void main(String[] args)throws IOException {

        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        int numRows= Integer.parseInt(br.readLine());
        String ss= s.convert(str, numRows);
        System.out.println(ss);
    
    }
}
