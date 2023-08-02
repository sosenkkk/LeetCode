#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else
        {
            int  r = x;
            long long p=0;
            while (r != 0)
            {
                
                p = p * 10 +r % 10;
                r = r / 10;
            }
            return (p == x);
              
        }
    }
};
int main()
{
    Solution S;
    int x;
    cin >> x;
    bool rev = S.isPalindrome(x);
    cout << rev;
    return 0;
}