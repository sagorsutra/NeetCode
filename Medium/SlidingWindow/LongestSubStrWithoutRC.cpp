#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;
        int maxln = 0;
        int l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) != m.end() && m[s[i]] >= l)
            {

                l = m[s[i]] + 1;
            }
            m[s[i]] = i;
            maxln = max(maxln, i - l + 1);
        }

        return maxln;
    }
};

int main()
{
    string str = "bbbbb"; // pwwkew
    Solution s;
    cout << s.lengthOfLongestSubstring(str);
}
