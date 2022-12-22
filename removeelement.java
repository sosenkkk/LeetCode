import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public int removeElement(int[] nums, int val) {
        int count=0;
        int len= nums.length - 1;
        int temp=0;
        for(int i=0; i<nums.length; i++){
            if(nums[count]!=val){
                count=count+1;
            }
            else{
                temp = nums[count];
                nums[count]=nums[len];
                nums[len]= temp;
                len=len-1;
            }
        }
        return count;
    }
}
public class removeelement {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Print a1");
        int size1= Integer.parseInt(br.readLine());
        int arr1[]= new int[size1];
        for(int i=0; i<size1; i++){
            arr1[i]= Integer.parseInt(br.readLine());
        }
        System.out.println("Print val");
        int val= Integer.parseInt(br.readLine());
        Solution s= new Solution();
        int a= s.removeElement(arr1, val);
        System.out.println(a);
    }
}
