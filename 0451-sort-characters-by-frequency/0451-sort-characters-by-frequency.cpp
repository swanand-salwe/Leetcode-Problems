class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int , char>> arr(123, {0 , 0});
        
        for(char ch : s){
            arr[(int)ch].first++;
            arr[(int)ch].second = ch;
        }
        
        sort(arr.begin(), arr.end(), [](const pair<int, char>& a, const pair<int, char>& b){
            if (a.first != b.first){
                return a.first > b.first;
            }
            return a.second > b.second;
        });
        
        string ans;
        ans.reserve(s.size());
        
        for(int i = 0; i < 123; i++){
            if(arr[i].first > 0){
                ans.append(arr[i].first,arr[i].second);
            }
        }
        
        return ans;
    }
};