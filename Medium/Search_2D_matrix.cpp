#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false;
        for(auto a : matrix){

                int lf =0;
                int rt = a.size()-1;
            for (int  i = 0; i < a.size(); i++)
            {
                if(target<=a[rt] && target>=a[lf]){

                    int mid = (lf + (rt - lf)/2);

                    if(a[mid]==target){
                        cout<<"Found";
                        ans = true;
                        return true;
                        break;
                    }
                    else if(target< a[mid]){
                        rt = mid-1;
                    }
                    else{
                        lf = mid+1;
                    }
                    
                }
                else{
                    break;
                }
            }
            
        }
        return ans;
    }
};


int main()
{
    int target =1;
    Solution s;
    //vector<vector<int>> v ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>> v ={{1}};
    bool ans = s.searchMatrix(v,target);

    if(ans== true){cout<<"ture";}
    else cout<<"false";

   

}