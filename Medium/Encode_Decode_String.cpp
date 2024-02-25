#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string encode(vector<string> &strs) {
        string res= "";
       for(auto i : strs){
            res += to_string(i.size()) + '#' + i;
       }
       return res;
    }

    vector<string> decode(string &str) {
        vector<string> ans;

        int i =0;

        while (i<str.size())
        {
            int j =i;
            while (str[j]!='#'){
                j++;
            }

            int len = stoi(str.substr(i,j-i));
            string s = str.substr(j+1, len);
            ans.push_back(s);
            i = j+1+len;
        }
        return ans;
    }
};

int main()
{
    vector<string> v = {"lint","code","love","you"};

    Solution sol;
    string str = sol.encode(v);
    vector<string> ans = sol.decode(str);
    for(auto i: ans){
        cout<<i<<" ";
    }

    
     
}


/*
 string encode(vector<string> &strs) {
        string s= "";
       for(auto i : strs){
            s += to_string(i.size()) + i +'#';
       }
       return s;
    }
 
    vector<string> decode(string &str) {
        vector<string> ans;
        string s = "";
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='#'){
                ans.push_back(s);
                s = "";
                continue;
            }
            else{
                s = s + str[i];
            }
        }
        return ans;
    }
*/