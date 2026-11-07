class Solution {
public:
    int countPrimes(int n){
        if(n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i <= (n - 1) / i; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }                            
        }
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(isPrime[i]) {
                count++;
            }
        }
        return count;
    }
};

//  this solution is good but brute force and can show the TLE 

// class Solution {
// public:
//     int countPrimes(int n) {

//         int count = 0;

//         for(int i = 2; i < n; i++) {

//             bool isPrime = true;

//             for(int j = 2; j < i; j++) {

//                 if(i % j == 0) {
//                     isPrime = false;
//                     break;
//                 }
//             }

//             if(isPrime) {
//                 count++;
//             }
//         }

//         return count;
//     }
// };