#include <iostream>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int b = needle.size();
        int n = haystack.size();
        if (n < needle.size())
        {
            return -1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (haystack[i] == needle[0] and haystack.substr(i, b) == needle)
                {

                    return i;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;

    string haystack, needle;
    cout << "Enter haystack and needle" << endl;
    cin >> haystack;
    cin >> needle;
    int ans = s.strStr(haystack, needle);
    cout << ans;
}