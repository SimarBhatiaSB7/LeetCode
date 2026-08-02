class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        for(long long i = 1; i<=min(a,b); i++){
            if(a%i == 0 && b%i == 0){
                count++;
            }
        }
        return count;
    }
};