class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        if(nums.empty()){
            return -1;
        }
        int max_freq = 0;
        int answer = -1;
        unordered_map<int , int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
            if(nums[i] % 2 == 0){
                if(freq[nums[i]] > max_freq || (freq[nums[i]] == max_freq && nums[i] < answer)){
                    max_freq = freq[nums[i]];
                    answer = nums[i];
                }
            }    
        }

        return answer;
    }
};