class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> repeat;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++ ) {
            if(i < nums.size() - 1){
                    if((nums[i] ^ nums[i+1]) == 0){
                    repeat.push_back(nums[i]);
                }
            }
            
        }   
        return repeat;
    }
};