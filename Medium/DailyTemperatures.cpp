#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> ans;
        int n = temperatures.size()-1;

        for (int i = n; i >=0; i--)
        {
            if(s.empty()){
                s.push(i);
                ans.push_back(0);
            }
            else{
                while (!s.empty() && temperatures[s.top()] <= temperatures[i])
                {
                    s.pop();
                }
                if(s.empty()){
                    s.push(i);
                    ans.push_back(0);
                }
                else{
                    ans.push_back(s.top()-i);
                    s.push(i);
                }
                
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

int main()
{
    int n =4;
    Solution s;
    vector<int> v ={73,74,75,71,69,72,76,73};
    vector<int> ans = s.dailyTemperatures(v);

   for(auto i : ans){
    cout<<i<<" ";
   }

}