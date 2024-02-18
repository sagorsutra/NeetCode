#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        

    }
};

int main(){

    vector<int> nums = {1,1,1,2,2,3};
    int k =2;   

    Solution s;
    vector<int> v = s.topKFrequent(nums,k);
    for(auto i: v){
        cout<<i<<" ";
    }
}