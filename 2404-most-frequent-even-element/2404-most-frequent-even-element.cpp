auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // Max value is 100,000 -> even numbers map to indices 0..50,000 via (num >> 1)
        int freq[50001] = {0};
        
        int max_freq = 0;
        int answer = -1;

        for (int num : nums) {
            // Bitwise check: (num & 1) == 0 is true only for even numbers
            if ((num & 1) == 0) {
                int count = ++freq[num >> 1];
                if (count > max_freq || (count == max_freq && num < answer)) {
                    max_freq = count;
                    answer = num;
                }
            }
        }

        return answer;
    }
};


// my approach

// class Solution {
// public:
//     int mostFrequentEven(vector<int>& nums) {
//         if(nums.empty()){
//             return -1;
//         }
//         int max_freq = 0;
//         int answer = -1;
//         unordered_map<int , int> freq;
//         for(int i = 0; i < nums.size(); i++){
//             freq[nums[i]]++;
//             if(nums[i] % 2 == 0){
//                 if(freq[nums[i]] > max_freq || (freq[nums[i]] == max_freq && nums[i] < answer)){
//                     max_freq = freq[nums[i]];
//                     answer = nums[i];
//                 }
//             }    
//         }

//         return answer;
//     }
// };