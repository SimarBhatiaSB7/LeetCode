class Solution {
public:
    int countAsterisks(string s) {
        int toggle = 0;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '|' && toggle == 0){
                toggle = 1;
            }
            else if(s[i] == '|' && toggle == 1){
                toggle = 0;
            }
            
            if(toggle == 0){
                if(s[i] == '*'){
                    count++;
                }
            }
        }
        return count;
    }
};