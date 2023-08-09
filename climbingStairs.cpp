#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)return n;
        int prev=1;
        int temp;
        int ans=1;
        for(int i=2;i<=n;i++){
            temp = ans;
            ans = prev + temp;
            prev = temp;
        }
        return ans;
        
    }
};
int main()
{
    Solution S;
    int x;
    cin >> x;
    int rev = S.climbStairs(x);
    cout << rev;
    return 0;
}
