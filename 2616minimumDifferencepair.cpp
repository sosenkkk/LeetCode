
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int low=0, high=1000000000, mid;
        int answer;
        int flag=0;
        while(low <= high){
            mid= (high+low)/2; 
            
            for (int i = 0; i < nums.size()-1; i++)
            {
                int diff = nums[i+1]-nums[i];
                if( mid == diff){
                   answer=diff;
                }
                if(diff > mid){
                    low = mid +1;
                }else if (diff < mid){
                    high = mid-1;
                }
            }
            
        }
        return answer;
    }
};
int main()
{
    Solution S;  
    int a;
    cin >> a;
    int b;
    vector<int> arr;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr.push_back(b);
    }
    int target;
    cin >> target;
    int ans = S.minimizeMax(arr, target);
    cout << ans;
}