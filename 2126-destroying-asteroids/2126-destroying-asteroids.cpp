class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long asteroidMass = mass;
        bool flag = false;
        std::sort(asteroids.begin(), asteroids.end());
        for(long long i = 0; i<asteroids.size(); i++){
            if(asteroidMass >= asteroids[i]){
                asteroidMass += asteroids[i];
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        return flag;
    }
};