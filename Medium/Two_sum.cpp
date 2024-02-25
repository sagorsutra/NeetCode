#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        int len = numbers.size()-1;
        int po_one =1;
        int po_two = len;

        while (po_one < po_two)
        {
            int sum = numbers[po_one] + numbers[po_two];
            if(sum == target){
                po_one++;
                po_two++;
                ans.push_back(po_one);
                ans.push_back(po_two);
                break;
            }
            else if (sum<target)
            {
                po_one+=1;
            }
            else{
                po_two-=1;
            }
            
        }
        return ans;
        
    }
};


int main(){
    vector<int> v ={2,7,11,15};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum(v,target);

    for(auto x : ans){
        cout<<x<<" ";
    } 
}