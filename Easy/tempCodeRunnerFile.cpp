bool ans = true;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[i+1]){
               ans = false;
               break;
            }
           
        }
        cout<<ans;