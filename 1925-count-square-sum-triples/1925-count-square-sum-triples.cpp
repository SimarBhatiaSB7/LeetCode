class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i<n; i++){
            for(int j = i+1; j<n; j++){
                double c = sqrt(i*i+j*j);
                if(c <= n && c == (int)c){
                    count += 2;
                }
            }
        }
        return count;
    }
};