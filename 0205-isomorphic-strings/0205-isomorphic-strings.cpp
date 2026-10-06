class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        char map1[256] = {0};
        char map2[256] = {0};

        for(int i = 0; i < s.length();i++){

            char c1 = s[i];
            char c2 = t[i];

            if(map1[c1] != 0){
                if(map1[c1] != c2){
                    return false;
                }
            }else{
                map1[c1] = c2;
            }

            if(map2[c2] != 0){
                if(map2[c2] != c1){
                    return false;
                }
            }else{
                map2[c2] = c1;
            }

        }
        return true;
    }
};