class Solution {
public:
    int smallestEvenMultiple(int n) {
        int small_mul = 0;
        
        if(n % 2 == 1){
            small_mul =  2 * n;
        }
        if(n % 2 == 0){
            small_mul = n;
        }
        return small_mul;
    }
};