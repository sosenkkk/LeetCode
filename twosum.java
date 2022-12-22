
import java.io.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] returnSize= new int[2];
        int c=0;
        for (int i = 0; i < nums.length; i++)
        {
            for (int j = i+1; j < nums.length; j++)
            {
                if(c==1)
                    break;
                if(nums[j]+nums[i]==target){
                    returnSize[0]=i;
                    returnSize[1]=j;
                    System.out.printf("[%d , %d]", returnSize[0], returnSize[1]);
                    c++;
                    break;
                }

            }

        }
        return returnSize;
    }
}
public class twosum{
    public static void main(String[] args)throws IOException{
        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int size = Integer.parseInt(br.readLine());
        int num[]= new int[size];
        for (int i = 0; i < size; i++)
        {
            /* code */
            num[i]=Integer.parseInt(br.readLine());
        }
        // int target;
        int target = Integer.parseInt(br.readLine());
        s.twoSum(num, target);
        // int * utput = twoSum(num, size, target, output );
    }
}
