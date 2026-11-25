//  one pass- hash table
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int , int> hash_table;
        for(int i = 0; i< nums.size(); ++i){
            int complement = target - nums[i];
            if(hash_table.find(complement) != hash_table.end()){
                return {hash_table[complement] , i};
            }
            hash_table[nums[i]] = i;
        }
        //  return an empty vector if no solutions is found
        return {};
    }
};

// average case o(n) tc and o(n) sc

// // two pass hash table
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> hash_table;
//         for(int i = 0; i < nums.size(); i++){
//             hash_table[nums[i]] = i;
//         }
//         for(int i = 0; i < nums.size(); i++){
//             int complement = target - nums[i];
//             if(hash_table.find(complement) != hash_table.end() && hash_table[complement] != i){
//                 return {i , hash_table[complement]};
//             }
//         }
//         // if no valid pair is found , return an emoty vector
//         return {};
//     }
// };

// worst case as follow o{n^2} time complexity 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         //  returns an empty vector if the solution is not found or the nums is empty
//         return {};
//     }
// };