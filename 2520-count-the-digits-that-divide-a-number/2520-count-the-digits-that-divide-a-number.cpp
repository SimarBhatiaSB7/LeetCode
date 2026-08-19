class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = num;
        int digit;
        while(n!=0){
            digit = n%10;
            n = n/10;
            if(num%digit == 0){
                count++;
            }
        }
        return count;
    }
};