class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag = false;
        for(long long i = 1; i<=num; i++){
            if(i*i == num){
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }
        return flag;
    }
};