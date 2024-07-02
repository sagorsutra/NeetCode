#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMin(vector<int> &v){
        
        int n = v.size()-1;
        int low = v[0];
        int high = v[n];
        int ans = INT_MAX;

        while (low<=high)
        {
            int mid = (low + high) /2;

            if(v[low]<= v[mid]){
                ans = min(ans,v[low]);
                low = mid++;
            }
            else{
                ans= min(ans,v[mid]);
                high--;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> v= {4,5,6,7,0,1,2};
    Solution s;
    int ans = s.findMin(v);
    cout<<ans;

}