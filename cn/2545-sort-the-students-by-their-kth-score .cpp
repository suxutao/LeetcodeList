#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        std::sort(score.begin(), score.end(),[&](vector<int>&a,vector<int>&b){
            return a[k]>b[k];
        });
        return score;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}