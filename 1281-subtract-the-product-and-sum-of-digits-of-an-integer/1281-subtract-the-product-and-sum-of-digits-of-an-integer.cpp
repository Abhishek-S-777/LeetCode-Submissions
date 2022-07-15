class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int subprodSum = 0;
        
        while(n != 0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n = n / 10;

        }
        
        subprodSum = product - sum;
            
        return subprodSum;
        
        
    }
};