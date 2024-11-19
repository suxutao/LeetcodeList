#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int w,b;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                w=b=0;
                for (int k = i; k < i + 2; ++k) {
                    for (int l = j; l < j + 2; ++l) {
                        if (grid[k][l]=='B')
                            ++b;
                        else
                            ++w;
                    }
                }
                if (w>=3||b>=3)
                    return true;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}