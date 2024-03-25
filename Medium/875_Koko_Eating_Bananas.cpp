#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    int findMax(vector<int> &v){
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }

    int calculateHours(vector<int> &v, int hourly){
        int totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            totalH += ceil((double)v[i] / (double)hourly);
        }
        
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1, high= findMax(piles);
        while (low<=high)
        {
            int mid = (low + high) /2;
            cout<<mid<<" "<<low<<" "<<high<<" "<<endl;
            int totalH = calculateHours(piles,mid);
            cout<<totalH<<endl;
            if(totalH<=h){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
             
        }
        return low;
        
    }
};

int main(){
    vector<int> v= {30,11,23,4,20};
    int h = 6;
    Solution s;
    int ans = s.minEatingSpeed(v,h);
    cout<<ans;
}