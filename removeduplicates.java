import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public int removeDuplicates(int[] nums) {
        int len = nums.length;
        if(len == 1)
            return 1;
        int i=0, c=0, val= nums[0];
        while(i< len-1){
            if(val== nums[i]){
                i++;
            }
            if(nums[i]==nums[i+1]){
                int j=i;
                while(nums[j]==nums[i+1] && i<len-1){
                    i++;
                }
                nums[c]=nums[i+1];
                i++;
                c++;
                val= nums[i];
            }
            else    
                c++;
                i++;
        }
        return c+1;
    }
    //     int i=1;
    //     while(i < len && nums[i] != nums[i-1]){
    //         i++;
    //     }
    //     if(i == len)
    //         return i;
    //     int j = i + 1;
    //     while(j < len){
    //         if(nums[j] != nums[i-1]){
    //             int temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //             i++;
    //         }
    //         j++;
    //     }   
    //     return i;
    // }
}
public class removeduplicates {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Print a1");
        int size1= Integer.parseInt(br.readLine());
        int arr1[]= new int[size1];
        for(int i=0; i<size1; i++){
            arr1[i]= Integer.parseInt(br.readLine());
        }
        Solution s= new Solution();
        int a= s.removeDuplicates(arr1);
        System.out.println(a);
    }
}