#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    { 
        vector<int> count(26,0);
        int MaxCount =0;
        int Maxlngth =0;
        int start =0;

        for (int i = 0; i <s.size(); ++i)
        {
            count[s[i]-'A']++;
            MaxCount = max(MaxCount,count[s[i]-'A']);

            if(i-start+1 - MaxCount>k){
                count[s[start]-'A']--;
                start++;
            }
         Maxlngth = max(Maxlngth,i-start+1);
        }
          return Maxlngth;   
    }
};

int main()
{
    string str = "AABABBA"; // pwwkew
    int k=1;
    Solution s;
    cout << s.characterReplacement(str,k);
}
