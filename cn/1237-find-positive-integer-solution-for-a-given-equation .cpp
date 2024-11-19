#include "../../../stdc.h"
using namespace std;

class CustomFunction {
public:
    // Returns f(x, y) for any given positive integers x and y.
    // Note that f(x, y) is increasing with respect to both x and y.
    // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
    int f(int x, int y);
};
//leetcode submit region begin(Prohibit modification and deletion)


class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        int x=1,y=1;
        vector<vector<int>>v;
        while (customfunction.f(x,y)<z){
            x++;
        }
        while (x>0){
            int t=customfunction.f(x,y);
            if (t==z){
                v.push_back({x--,y++});
            }else if (t>z){
                x--;
            }else{
                y++;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}