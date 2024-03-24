#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        func(v,n,0,0,"");
        return v;
        
    }

    void func(vector<string> &ans, int n, int open, int close, string curr_str){
        if(curr_str.size()==n*2){
            ans.push_back(curr_str);
            return;
        }

        if(open<n){
            func(ans,n,open+1,close,curr_str+"(");
        }
        if(close<open){
             func(ans,n,open,close+1,curr_str+")");
        }
    }
};

int main()
{
    int n =4;
    Solution s;
   vector<string> ans = s.generateParenthesis(n);
   for(auto i : ans){
    cout<<i<<" ";
   }

}