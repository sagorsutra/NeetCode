#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> nums= {1,2,3,1};
        bool ans = false;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[i+1]){
               ans = true;
               break;
            }
        }
        cout<<ans;
    }