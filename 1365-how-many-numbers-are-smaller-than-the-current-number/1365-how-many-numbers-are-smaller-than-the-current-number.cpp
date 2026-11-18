class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        vector<int> ans;
        ans.reserve(nums.size());

        for (int num : nums) {
            // lower_bound finds the first position where 'num' can be inserted
            int count = lower_bound(sorted_nums.begin(), sorted_nums.end(), num) - sorted_nums.begin();
            ans.push_back(count);
        }

        return ans;
    }
};


// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         int len = nums.size();
//         vector<int> ans;
//         ans.reserve(len);
//         for(int i = 0; i < len; i++){
//             int count = 0; // resets the count at each num 
//             for(int j = 0; j < len; j++){
//                 if(nums[j] < nums[i]){
//                     count++;
//                 }
//             }
//             ans.push_back(count);
//         }
//         return ans;
//     }
// };