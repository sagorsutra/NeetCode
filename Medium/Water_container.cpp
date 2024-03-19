#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int Maxarea=0,ans;
        int p_one=0;
        int p_two=n-1;
        int h =0, w=0;

        while (p_one < p_two)
        {
            h = min(height[p_one],height[p_two]);
            w = p_two - p_one;
            ans = h * w;

            if(ans>Maxarea){
                Maxarea = ans;
            } 

            if (height[p_one] < height[p_two])
            {
                p_one++;
            }
            else {
                p_two--;
            }
        }       
        return Maxarea;
         
    }
};

int main(){
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(v);
}