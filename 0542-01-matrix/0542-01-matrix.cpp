class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        queue<pair<int,int>> q;

        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(mat[i][j] == 0) {
                    q.push({i, j});
                } else {
                    mat[i][j] = m+n;
                }
            }
        }

        vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

         while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for(int k = 0; k<4; k++) {
                int newi = i + dir[k][0];
                int newj = j + dir[k][1];
                if(newi >= 0 && newi < n && newj >= 0 && newj < m && mat[newi][newj] > mat[i][j] + 1) {
                    mat[newi][newj] = 1+ mat[i][j];
                    q.push({newi, newj});
                }
            }
        }

        return mat;
    }
};