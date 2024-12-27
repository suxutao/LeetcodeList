#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
int f[100010][5][5][5];

class Solution {
public:
    int maxGroupNumber(vector<int>& tiles) {
        int n = tiles.size();
        sort(tiles.begin(), tiles.end());
        memset(f, -1, sizeof(f));
        f[0][0][0][1] = 0;

        for (int i = 1; i < n; ++i) {
            for (int a = 0; a < 5; ++a) {
                for (int b = 0; b < 5; ++b) {
                    for (int c = 0; c < 5; ++c) {
                        if (f[i - 1][a][b][c] == -1) {
                            continue;
                        }
                        if (tiles[i - 1] == tiles[i]) {
                            f[i][a][b][c] = max(f[i][a][b][c], f[i - 1][a][b][c]);
                            if (c != 4) {
                                f[i][a][b][c + 1] = max(f[i][a][b][c + 1], f[i - 1][a][b][c]);
                            }
                            if (c + 1 >= 3) {
                                f[i][a][b][c - 2] = max(f[i][a][b][c - 2], f[i - 1][a][b][c] + 1);
                            }
                            if (min({a, b, c + 1}) >= 1) {
                                f[i][a - 1][b - 1][c] = max(f[i][a - 1][b - 1][c], f[i - 1][a][b][c] + 1);
                            }
                        }
                        else if (tiles[i - 1] + 1 == tiles[i]) {
                            f[i][b][c][1] = max(f[i][b][c][1], f[i - 1][a][b][c]);
                            if (min({b, c}) >= 1) {
                                f[i][b - 1][c - 1][0] = max(f[i][b - 1][c - 1][0], f[i - 1][a][b][c] + 1);
                            }
                        }
                        else if (tiles[i - 1] + 2 == tiles[i]) {
                            f[i][c][0][1] = max(f[i][c][0][1], f[i - 1][a][b][c]);
                        }
                        else {
                            f[i][0][0][1] = max(f[i][0][0][1], f[i - 1][a][b][c]);
                        }
                    }
                }
            }
        }

        int ans = 0;
        for (int a = 0; a < 5; ++a) {
            for (int b = 0; b < 5; ++b) {
                for (int c = 0; c < 5; ++c) {
                    ans = max(ans, f[n - 1][a][b][c]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}