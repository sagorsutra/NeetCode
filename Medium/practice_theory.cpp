#include <bits/stdc++.h>
using namespace std;
 

int main()
{
     int n =6, target=24;
     vector<int> v = {12,3,7,1,6,9};
     int len = v.size();
     bool found = false;

     sort(v.begin(), v.end());

     int p_one = 0;
     int p_two = len -1;
     int idx =0;
     
        while (p_one < p_two && idx < len)
        {
            int sum = v[p_one] + v[p_two];
            if(target-sum == v[idx]){
                found = true;
                break;
                
            }
            else if(sum +v[idx]<target){
                p_one+=1;
            }
            else{
                p_two-=1;
            }
            idx++;
        }

        cout<<found;

     

    
     
}

 