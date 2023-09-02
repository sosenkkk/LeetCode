
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int upper = nums.size()-1;
        int mid, lower = 0;;

        while (lower <= upper)
        {
            mid = (upper + lower) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            else if(nums[mid]>= nums[lower]){
                if(nums[lower]<=target && target<nums[mid]){
                    upper = mid-1;
                }else{
                    lower = mid+1;
                }
            }else{
                if(nums[mid]<target && target<=nums[upper]){
                    lower= mid+1;
                }else{
                    upper = mid-1;
                }
            }
        }

        return false;
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
    bool ans = S.search(arr, target);
    cout << ans;
}