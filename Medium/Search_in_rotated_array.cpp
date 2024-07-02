#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &v, int target){
        int n = v.size()-1;
        int low = 0;
        int high = n;        

        while (low<=high)
        {
            int mid = (low + high) /2;
            
            if(v[mid] == target){
                return mid;
            }
            
            if(v[low] <= v[mid]){

                 if(v[low] <= target && target <= v[mid]){
                    high = mid - 1;
                 }
                 else{
                    low = mid + 1;
                 }
            }
            else{
                 if(v[mid]<= target &&  target <=v[high] ){
                    low = mid +1;
                 }
                 else{
                    high = mid -1;
                 }
            }
        }
        return -1;
         
       
    }
};

int main(){
    vector<int> v= {4,5,6,7,0,1,2};
    Solution s;
    int target = 0;
    int ans = s.search(v,target);
    cout<<ans;
}