class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0 , end = s.size() - 1;
        while(start < end){
            char tmp = s[start];
            s[start] = s[end];
            s[end] = tmp;
            start++;
            end--;
        }
    }
};

// or 

// class Solution {
// public:
//     void reverseString(vector<char>& s){
//         int left = 0;
//         int right = s.size() - 1;
//         while(left < right){
//             swap(s[left] , s[right]);
//             left++;
//             right--;
//         }
//     }
// };