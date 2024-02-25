#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans;
        vector<int> prefixProduct;
        vector<int> suffixProduct;
        int n = nums.size();
        int multi = 1;

        prefixProduct[0]=1;
        for (int i = 1; i < n-1; i++){
            prefixProduct[i] = prefixProduct[i-1] * nums[i];
        }

        suffixProduct[n-1] = 1;
        for (int i = n-2; i>0; --i){
            suffixProduct[i] = suffixProduct[i+1] * nums[i+1];
        }

        for (int k = 0; k < n-1; k++)
        {
            ans[k] = prefixProduct[k] * suffixProduct[k];
        }    

        return ans;
    }
};

int main()
{
    // int n,t;
    // cin>>n;
    vector<int> v = {1,2,3,4};
    Solution s;
    vector<int> r = s.productExceptSelf(v);
    for(auto i : r){
        cout<<i<<" ";
    }
}

/*
    Solution without time constraint 
     vector<int> ans;
        int multi = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                else{
                    multi = multi * nums[j];
                }
            }
            ans.push_back(multi);
            multi =1;
        }
        return ans;
*/