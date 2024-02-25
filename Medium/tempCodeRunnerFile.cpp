sort(nums.begin(), nums.end());
        int cont =0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int next = nums[i+1];
            if(nums[i]+1==next){
                cont++;
            }
        }
        return cont+1;
        