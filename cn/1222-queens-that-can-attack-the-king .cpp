#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>vv;
        set<vector<int>>m(queens.begin(),queens.end());
        int x=king[0],y=king[1];
        for (int i = x+1; i < 8; ++i) {
            if (m.count({i,y})){
                vv.push_back({i,y});
                break;
            }
        }
        for (int i = y+1; i < 8; ++i) {
            if (m.count({x,i})){
                vv.push_back({x,i});
                break;
            }
        }
        for (int i = x-1; i >= 0; --i) {
            if (m.count({i,y})){
                vv.push_back({i,y});
                break;
            }
        }
        for (int i = y-1; i >= 0; --i) {
            if (m.count({x,i})){
                vv.push_back({x,i});
                break;
            }
        }
        for (int i = 1; x+i<8&&y+i<8; ++i) {
            if (m.count({x+i,y+i})){
                vv.push_back({x+i,y+i});
                break;
            }
        }
        for (int i = 1; x+i<8&&y-i>=0; ++i) {
            if (m.count({x+i,y-i})){
                vv.push_back({x+i,y-i});
                break;
            }
        }
        for (int i = 1; x-i>=0&&y-i>=0; ++i) {
            if (m.count({x-i,y-i})){
                vv.push_back({x-i,y-i});
                break;
            }
        }
        for (int i = 1; x-i>=0&&y+i<8; ++i) {
            if (m.count({x-i,y+i})){
                vv.push_back({x-i,y+i});
                break;
            }
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}