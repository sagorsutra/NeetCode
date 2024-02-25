#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if(i>0 && nums[i]== nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while (j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while ( j<k &&nums[j] == nums[j-1])
                    {
                        j++;
                    }
                    while ( j<k &&nums[k] == nums[k+1])
                    {
                        k--;
                    }
                    
                }
            }
            
        }
        return ans;
        
    }
};

int main()
{
    vector<vector<int>> ans;
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    Solution s;
    ans = s.threeSum(v);
    for (auto x : ans)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
    }
}