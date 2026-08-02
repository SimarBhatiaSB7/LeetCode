class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        while(k!=0){
            k--;
            if(numOnes != 0){
                numOnes--;
                sum = sum + 1;
            }
            else{
                if(numZeros != 0){
                    numZeros--;
                }
                else{
                    numNegOnes--;
                    sum = sum -1;
                }
            }
        }
        return sum;
    }
};