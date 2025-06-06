class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    bool  dec = true , inc = true;
    int prev = nums[0];
    for(int i = 1 , n = nums.size() ; i<n &&(dec|| inc); ++i){
        if(prev < nums[i])dec=false;
        else if(prev > nums[i]) inc = false;
        prev=nums[i];
    }    
return dec || inc;    
    
    }
};