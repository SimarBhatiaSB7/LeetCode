class Solution {
public:
    bool isPalindrome(int x) {
        int x1 = x;
        if(x>=0){
            long y = 0;
            while(x1>0){
                int rem = x1 % 10;
                x1 = x1/10;
                y = y*10 + rem;
            }
            if(x == y){
                return true;
            }
        }
        return false;
    }
};