#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v(heights.begin(),heights.end());
        sort(v.begin(),v.end());
        int count=0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i]!=heights[i])
                count++;
        }
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}