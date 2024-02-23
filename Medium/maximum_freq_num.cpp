#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFreqNum(vector<int> nums)
    {
        unordered_map<int, int> umap;
        int maxFreq = 0, ans = 0;

        for (auto x : nums){
            umap[x]++;
            maxFreq = max(maxFreq,umap[x]);
        }

        for(auto i : umap){
            if(maxFreq == i.second){
                ans = i.first;
            }
        }

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if(maxFreq == umap[nums[i]]){  // umap[index] == means the values
        //         ans = nums[i];
        //     }
        // }
        

        // for (auto it = umap.begin(); it != umap.end(); ++it){
        //     if (maxCount < it->second){
        //         maxCount = it->second;
        //         ans = it->first;
        //     }
        // }
        return ans;
    }
};

int main()
{
    // int n,t;
    // cin>>n;
    vector<int> v = {2, 12, 2, 11, -12, 2, -1, 2, 2, 11, 12, 2, -6};
    Solution s;
    int ans = s.maxFreqNum(v);

    cout << ans;
}