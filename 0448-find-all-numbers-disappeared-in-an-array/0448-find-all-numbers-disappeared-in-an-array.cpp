auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int totalElements = nums.size();
        int currentSeat = 0;

        // 1. Send every number to its assigned seat (number 1 -> seat 0, number 2 -> seat 1, etc.)
        while (currentSeat < totalElements) {
            int currentNumber = nums[currentSeat];
            int assignedSeat = currentNumber - 1;

            if (nums[currentSeat] != nums[assignedSeat]) {
                swap(nums[currentSeat], nums[assignedSeat]);
            } else {
                currentSeat++;
            }
        }

        // 2. Check every seat to see which expected number is missing
        vector<int> missingNumbers;
        for (int seat = 0; seat < totalElements; seat++) {
            int expectedNumber = seat + 1;
            if (nums[seat] != expectedNumber) {
                missingNumbers.push_back(expectedNumber);
            }
        }

        return missingNumbers;
    }
};

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> seen(n + 1, 0);

//         for (int num : nums) {
//             seen[num] = 1;
//         }

//         vector<int> ans;
//         for (int i = 1; i <= n; i++) {
//             if (seen[i] == 0) {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };