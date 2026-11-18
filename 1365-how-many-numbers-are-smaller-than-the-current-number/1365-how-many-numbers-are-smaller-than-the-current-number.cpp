class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        ans.reserve(len);
        for(int i = 0; i < len; i++){
            int count = 0; // resets the count at each num 
            for(int j = 0; j < len; j++){
                if(nums[j] < nums[i]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};