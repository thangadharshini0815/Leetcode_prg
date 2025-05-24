class Solution {
public:
int minOperations(std::vector<int>& nums) {
    int operations = 0;
    for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                
                int needed = nums[i - 1] + 1 - nums[i];
                operations += needed;
                nums[i] = nums[i - 1] + 1; 
            }
        }
return operations;
    }

};