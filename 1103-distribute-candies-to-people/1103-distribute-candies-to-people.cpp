#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> distributeCandies(int candies, int num_people) {
        std::vector<int> distribution(num_people, 0);
        
        int i = 0;
        int give = 1;
        while (candies > 0) {
            int actual_give = std::min(candies, give);
            
            distribution[i % num_people] += actual_give;
            candies -= actual_give;
            
            give++;
            i++;
        }

        return distribution;
    }
};