#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]!= t[i]) {
                return false;
            }
        }
        return true;
        
    }
};

int main(){
    string s ="rat";
    string t ="car";
    Solution sol;
    
    cout<<sol.isAnagram(s,t);
    
}