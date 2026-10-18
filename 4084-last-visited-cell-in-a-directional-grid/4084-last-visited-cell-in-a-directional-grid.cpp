class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));

        int r = 0, c = 0;
        visited[0][0] = true;
        while(true){
            int r_next = r, c_next = c;
            char dir = grid[r][c];

            if(dir == 'L'){
                c_next--;
            } else if(dir == 'R'){
                c_next++;
            } else if(dir == 'U'){
                r_next--;
            } else if(dir == 'D'){
                r_next++;
            }

            if(r_next < 0 || r_next >= m || c_next < 0 || c_next >= n || visited[r_next][c_next]){
                break;
            }

            r = r_next;
            c = c_next;
            visited[r][c] = true;
        }
        return {r, c};
    }
};