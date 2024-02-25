#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string normal;
        bool found = true;
        for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {          //isalum() function is for checking alphanumeric value
            normal += tolower(s[i]); //we took directly alphanumeric value
        }
    }

        int len = normal.size();
        int po_one =0;
        int po_two =len-1;

        if(normal==""){
            found = true;
        }
        else{
            while (po_one < po_two)
            {
                if(normal[po_one]!=normal[po_two]){
                    found = false;
                    break;
                }
                po_one+=1;
                po_two-=1;
            } 
        }
        return found;
    }
};

int main(){
    Solution s;
    cout<<s.isPalindrome(" ");
}