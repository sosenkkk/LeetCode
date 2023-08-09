#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string strWithout3a3b(int a, int b)
    {
        string ans = "";
        int diff;
        if (a > b)
        {
            diff = a - b;
            while(diff!=0 && a!=0 && b!=0){
                
                ans= ans+"aab";
                a= a-2;
                b=b-1;
                diff--;
            }
            while(a!=0 && b!=0){
                ans= ans +"ab";
                a--;
                b--;
            }
            while(a!=0){
                ans= ans +"a";
                a--;
            }
            while(b!=0){
                ans= ans +"b";
                b--;
            }
            return ans;
        }
        else
        {
            diff = b - a;
            while(diff!=0 && b!=0 && a!=0){
                ans= ans+"bba";
                b= b-2;
                a=a-1;
                diff--;
            }
            while(b!=0 && a!=0 ){
                ans= ans +"ba";
                a--;
                b--;
            }
            while(a!=0){
                ans= ans +"a";
                a--;
            }
            while(b!=0){
                ans= ans +"b";
                b--;
            }
            return ans;
            
        }
    }
};
int main()
{
    Solution S;
    int a;
    cin >> a;
    int b;
    cin >> b;
    string rev = S.strWithout3a3b(a, b);
    cout << rev;
    return 0;
}