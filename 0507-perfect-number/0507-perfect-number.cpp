class Solution {
public:
    bool checkPerfectNumber(int num) {

        if (num <= 1) return false;

        int dup_num = num;
        int sum = 0;

        vector<int> a;
        for(int i = 1; i <= sqrt(num); i++){
            if((num % i) == 0){
                a.emplace_back(i);

                if(i != num / i){
                    a.emplace_back(num / i);
            }
            }
        }

        sort(a.begin(),a.end());
        a.pop_back();

        for(auto it : a){
            sum += it;
        }

        return (sum == dup_num);
    }
};