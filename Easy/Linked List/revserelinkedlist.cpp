#include <bits/stdc++.h>
using namespace std;
  
struct  Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    Node* reverseList(Node* head) {
        
    }
};


int main()
{
    vector<int> ar = {1,3,-1,-3,5,3,6,7};
    int k=3;
    Solution s;
    vector<int> ans = s.reverseList(ar);
    for(int i : ans){
        cout<<i<<" ";
    }
}