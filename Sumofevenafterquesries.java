import java.io.*;

class Solution {
    public int[] sumEvenAfterQueries(int[] nums, int[][] queries) {
        int len= nums.length;
        int lent= queries.length;
        int array[]= new int[len];
        int index, sum=0;
        for(int i=0; i< len; i++){
            if(nums[i]%2==0){
                sum=sum+nums[i];
            }
        }
        for(int i=0; i<lent; i++){
            index= queries[i][1];
            nums[index]=nums[index]+ queries[i][0];
            if(nums[index]%2==0 ){
                if(queries[i][0]%2==0)
                    sum=sum+queries[i][0];
                else
                    sum=sum-nums[index];
            }
            else{
                if(queries[i][0]%2!=0)                             
                    sum=sum+queries[i][0]+ nums[index];
                else 
                    sum=sum;
            }
            array[i]= sum;
        }
        return array;
    }
}


public class Sumofevenafterquesries {
    public static void main(String[] args)throws IOException {
        Solution s= new Solution();
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter size of nums and enter num");
        int size1= Integer.parseInt(br.readLine());
        int nums[]= new int[size1];
        for(int i=0; i< size1; i++){
            nums[i]=Integer.parseInt(br.readLine());
        }
        for(int i=0; i< size1; i++){
            System.out.println(nums[i]);
        }
        System.out.println("Enter size of queries and enter queries");
        int len= Integer.parseInt(br.readLine());
        int queries[][]= new int[len][2];
        for(int i=0; i< len; i++){
            queries[i][0]=Integer.parseInt(br.readLine());
            queries[i][1]=Integer.parseInt(br.readLine());
        }
        for(int i=0; i < len; i++){
            System.out.println(queries[i][0]+"  "+ queries[i][1]);
        }
        int ss[]= new int[size1];
        ss= s.sumEvenAfterQueries(nums,queries);
        System.out.println(ss);
    
    }
}