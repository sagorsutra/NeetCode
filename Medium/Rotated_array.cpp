#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &v, int target){
        int n = v.size()-1;
        int low = 0;
        int high = n;
        int ans = -1;
        

        while (low<=high)
        {
            int mid = (low + high) /2;

            if (target==v[mid]){
                return mid;
            }
            else if(v[low]<= v[mid]){
                ans = min(ans,v[low]);
                low = mid+1;
            }
            else{
                high = mid-1;
                ans= min(ans,v[mid]); 
                
            }
        }
         return ans;
       
    }
};

int main(){
    vector<int> v= {1};
    Solution s;
    int target = 0;
    int ans = s.search(v,target);
    cout<<ans;
}