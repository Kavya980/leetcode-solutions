class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        // Saare rotten oranges queue mein daalo
        // aur fresh oranges count karo
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 2) {
                    q.push({i, j});
                }
                else if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        // UP, DOWN, LEFT, RIGHT
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty() && fresh > 0) {

            int size = q.size();

            // Ek level = 1 minute
            for(int i = 0; i < size; i++) {

                auto [r, c] = q.front();
                q.pop();

                // 4 directions
                for(int d = 0; d < 4; d++) {

                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    // Boundary check + fresh orange
                    if(nr >= 0 && nr < m &&
                       nc >= 0 && nc < n &&
                       grid[nr][nc] == 1) {

                        grid[nr][nc] = 2;
                        fresh--;

                        q.push({nr, nc});
                    }
                }
            }

            minutes++;
        }

        // Agar fresh orange bach gaya
        if(fresh > 0)
            return -1;

        return minutes;
    }
};