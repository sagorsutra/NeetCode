#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int freq=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq>=k  && nums[i]!=nums[i+1])
            {
                ans.push_back(nums[i]);
                freq=0;
            }
            else if (nums.size()==1)
            {
                ans.push_back(nums[i]);
            }
            
            freq++;
        }
        return ans;
    }
};
int main(){
    vector<int> nums = {-1,-1};
    int k =1;   
    Solution s;
    vector<int> v = s.topKFrequent(nums,k);
    for(auto i: v){
        cout<<i<<" ";
    }
}