class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};

        // Step 1: Count how many times each number appears
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Prefix Sum
        // After this loop, freq[i] holds how many numbers are <= i
        for (int i = 1; i <= 100; i++) {
            freq[i] += freq[i - 1];
        }

        // Step 3: Build the answer in O(1) lookup per number
        vector<int> ans;
        ans.reserve(nums.size());

        for (int num : nums) {
            if (num == 0) {
                ans.push_back(0); // Nothing is smaller than 0
            } else {
                ans.push_back(freq[num - 1]); // Count of numbers <= (num - 1)
            }
        }

        return ans;
    }
};

// or 

// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         vector<int> sorted_nums = nums;
//         sort(sorted_nums.begin(), sorted_nums.end());

//         vector<int> ans;
//         ans.reserve(nums.size());

//         for (int num : nums) {
//             // lower_bound finds the first position where 'num' can be inserted
//             int count = lower_bound(sorted_nums.begin(), sorted_nums.end(), num) - sorted_nums.begin();
//             ans.push_back(count);
//         }

//         return ans;
//     }
// };

// or 

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