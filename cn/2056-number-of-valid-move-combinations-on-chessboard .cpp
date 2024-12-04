#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
struct Move {
    int x0, y0;
    int dx, dy;
    int step;
};

class Solution {
    vector<pair<int, int>> DIRS = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
    unordered_map<char, vector<pair<int, int>>> PIECE_DIRS = {
            {'r', {DIRS.begin(), DIRS.begin() + 4}},
            {'b', {DIRS.begin() + 4, DIRS.end()}},
            {'q', DIRS},
    };

    vector<Move> generate_moves(int x0, int y0, vector<pair<int, int>>& dirs) {
        const int SIZE = 8;
        vector<Move> moves = {{x0, y0, 0, 0, 0}};
        for (auto [dx, dy] : dirs) {
            int x = x0 + dx, y = y0 + dy;
            for (int step = 1; 0 < x && x <= SIZE && 0 < y && y <= SIZE; step++) {
                moves.emplace_back(x0, y0, dx, dy, step);
                x += dx;
                y += dy;
            }
        }
        return moves;
    }

    bool is_valid(Move& m1, Move& m2) {
        int x1 = m1.x0, y1 = m1.y0;
        int x2 = m2.x0, y2 = m2.y0;
        for (int i = 0; i < max(m1.step, m2.step); i++) {
            if (i < m1.step) {
                x1 += m1.dx;
                y1 += m1.dy;
            }
            if (i < m2.step) {
                x2 += m2.dx;
                y2 += m2.dy;
            }
            if (x1 == x2 && y1 == y2) {
                return false;
            }
        }
        return true;
    }

public:
    int countCombinations(vector<string>& pieces, vector<vector<int>>& positions) {
        int n = pieces.size();
        vector<vector<Move>> all_moves(n);
        for (int i = 0; i < n; i++) {
            all_moves[i] = generate_moves(positions[i][0], positions[i][1], PIECE_DIRS[pieces[i][0]]);
        }

        vector<Move> path(n);
        int ans = 0;
        auto dfs = [&](auto& dfs, int i) -> void {
            if (i == n) {
                ans++;
                return;
            }
            // 枚举当前棋子的所有合法移动
            for (Move& move1 : all_moves[i]) {
                // 判断合法移动 move1 是否有效
                bool ok = true;
                for (int j = 0; j < i; j++) {
                    if (!is_valid(move1, path[j])) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    path[i] = move1;
                    dfs(dfs, i + 1);
                }
            }
        };
        dfs(dfs, 0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}