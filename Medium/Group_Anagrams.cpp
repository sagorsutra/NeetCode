#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnargrams(vector<string> &strs)
    {
        vector<vector<string>> finalv;
        unordered_map<string, vector<string>> umap;
        
        for(auto x : strs){
            string temp = x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
        }

        for(auto x: umap){
            vector<string> temp = x.second;
            finalv.push_back(temp);
        }

        return finalv;
    }
};

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    vector<vector<string>> v = sol.groupAnargrams(strs);

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
}


/*
for (int i = 0; i < strs.size(); i++)
        {
            vector<string> subv;
            string original = strs[i];
            sort(strs[i].begin(), strs[i].end());

            bool found;
            for (int j = 0; j < finalv.size(); j++)
            {
                string secorgianl = strs[j];
                sort(strs[j].begin(), strs[j].end());
                if (strs[i] == strs[j])
                {
                    subv.push_back(secorgianl);
                }
            }
            finalv.push_back(subv);
        }
*/