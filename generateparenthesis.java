import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;

class Solution {
    public int searchInsert(int[] nums, int target) {
        int start= 0, end = nums.length-1;
        int mid=0;
        while (start <= end){
            mid= (start + end)/2;
            if(nums[mid]== target)
                return mid;
            else if (nums[mid]< target)
                start= mid+1;
            else
                end = mid-1;
        }
        if(nums[mid]< target)
            return mid+1;
        else
            return mid;
    }
}

public class insertelement {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int str= Integer.parseInt(br.readLine());
        Solution s = new Solution();
        List<String> ss = s.searchInsert(arr, str);
        System.out.println(ss);
    }
}