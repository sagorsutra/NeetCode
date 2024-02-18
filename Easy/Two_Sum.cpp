#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int a =0;
        // sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        { 
            int left = target - nums[i];
              if(left== nums[i+1]){
                 ans.push_back(i);
                 ans.push_back(i+1);
              }
        }
        return ans;
    }
};

int main()
{
    vector<int> num = {3,2,4};  //2,3,4
    int target = 6;
    Solution sol;
    
    vector<int> v = sol.twoSum(num,target);

    for(auto i: v){
        cout<<i<<" ";
    }
}