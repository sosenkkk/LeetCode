import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> arr= new ArrayList<String>();
        arr.add("abc");
        arr.add
        return arr;
    }
}
public class lettercombinationofphonenumber {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        List<String> arr= new ArrayList<String>();
        Solution s = new Solution();
        arr= s.letterCombinations(str);
        for(String i : arr){
            System.out.println(i);
        }
    }
}
