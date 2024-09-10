#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> heap;
        vector<int> ans;

        for (int i = 0; i < k; i++){
            heap.push({nums[i],i});
        }
        
        ans.push_back(heap.top().first);

        for (int i = k; i < nums.size(); i++){
            heap.push({nums[i],i});

            while (heap.top().second<=i-k)
            {
                heap.pop();
            }
            
            ans.push_back(heap.top().first);
        }
        

        return ans;
    }
};

int main()
{
    vector<int> ar = {1,3,-1,-3,5,3,6,7};
    int k=3;
    Solution s;
    vector<int> ans = s.maxSlidingWindow(ar,k);
    for(int i : ans){
        cout<<i<<" ";
    }
}