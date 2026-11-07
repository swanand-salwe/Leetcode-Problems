class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int sum = 0;
        for(int i = 1; i <= sqrt(num); i++){   // generally avoid the sqrt() and use num / i means "for(int i = 1; i <= num / i; i++)"
            if(num % i == 0){
                sum += i;
                if((i != num / i) && (i != 1)){
                    sum += (num / i);
                }
            }
        }
        return (sum == num);        
    }
};

// Brute force solution

// class Solution {
// public:
//     bool checkPerfectNumber(int num) {

//         if (num <= 1) return false;

//         int dup_num = num;
//         int sum = 0;

//         vector<int> a;
//         for(int i = 1; i <= sqrt(num); i++){
//             if((num % i) == 0){
//                 a.emplace_back(i);

//                 if(i != num / i){
//                     a.emplace_back(num / i);
//             }
//             }
//         }

//         sort(a.begin(),a.end());
//         a.pop_back();

//         for(auto it : a){
//             sum += it;
//         }

//         return (sum == dup_num);
//     }
// };