#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    { 
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int s1len = s1.size();
        int s2len = s2.size();
        if(s1len>s2len){
            return false;
        }
        int right=0, left=0;
        while (right<s1len)
        {
            s1hash[s1[right]-'a'] +=1;
            s2hash[s2[right]-'a'] +=1;
            right++;
        }
        right -=1;

        while (right<s2len)
        {
            if(s1hash==s2hash){
                return true;
            }
            right +=1;
            if(right!=s2len){
                s2hash[s2[right]-'a'] +=1;
            }
            s2hash[s2[left]-'a'] -=1;
            left++;
        }
        
        return false;
    }
};

int main()
{
    string s1 = "ab"; // pwwkew
    string s2 = "eidboaoo";
    Solution s;
    cout << s.checkInclusion(s1, s2);
}

/*
bool ans = false;
        int start = 0;
        vector<int> st1(26, 0);
        vector<int> st2(26, 0);

        for (int i = 0; i < s1.size(); i++)
        {
            st1[s1[i]]++;
        }

        for (int j = 0; j < s2.size(); j++)
        {
            if (st1[s2[j] - 'a'] > 0)
            {
                start = s2[j] + 1;
                if (st1[s2[start] - 'a'] > 0)
                {
                    ans = true;
                }
            }
        }

*/