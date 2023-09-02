#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v;
        v.push_back(0);
        int s = 0;

        for(int i=1; i <=n; i++){
            while(i!=0){
                s= s + i%2;
                i=i/2;
            }
            v.push_back(s);
            s=0;
        }
        return v;
    }
};

int main(){
    Solution s ;
    int x;
    cin >> x;
    vector<int> ans = s.countBits(x);
    for (int i = 0; i < x; i++)
    {
        cout<< ans[i];
    }
    
}