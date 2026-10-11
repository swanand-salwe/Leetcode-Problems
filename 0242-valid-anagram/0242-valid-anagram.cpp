class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_chars;
        unordered_map<char, int> t_chars; 

        for(char c : s){
            s_chars[c]++;
        }

        for(char c : t){
            t_chars[c]++;
        }

        if(s_chars == t_chars){
            return true;
        }

        return false;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if  (s.length() != t.length()) return false;

//         unordered_map<char, int> count;

//         for(char c : s){
//             count[c]++;
//         }

//         for(char c : t){
//             count[c]--;
//             if(count[c] < 0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
