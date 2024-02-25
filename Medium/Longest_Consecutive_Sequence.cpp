#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int longest =0;
        unordered_set<int> set(nums.begin(),nums.end());

        for(auto it : set){
            if(set.find(it-1) == set.end()){
                int cont =1;
                int x = it;
                while (set.find(x+1)!=set.end())
                {
                    x = x +1;
                    cont = cont +1;
                }
                longest = max(longest,cont);
            }
        }
        
        return longest;
        
        
    }
};

int main()
{
    vector<int> v = {100,1,200,2,3,4};
    Solution s;
    int ans = s.longestConsecutive(v);
    cout<<ans;
}