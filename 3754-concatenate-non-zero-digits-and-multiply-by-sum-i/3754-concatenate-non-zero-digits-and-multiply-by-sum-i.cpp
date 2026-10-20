class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0,sum = 0,len = 1;
        while(n != 0){
            num = (n % 10) * len + num;
            if(n % 10 != 0) len = len * 10;
            sum += n % 10;
            n = n / 10;
        }
        return sum * num; 
    }
};