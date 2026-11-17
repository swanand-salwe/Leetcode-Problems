class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        vector<int> freq(len + 1 , 0);
        for(auto i : nums){
            freq[i]++;
        }
        int duplicate = -1 , missing = -1;
        for(int i = 1; i <= len; i++){
            if(freq[i] == 2){
                duplicate = i;
            }else if(freq[i] == 0){
                missing = i;
            }
        }
        return {duplicate , missing};
    }
};