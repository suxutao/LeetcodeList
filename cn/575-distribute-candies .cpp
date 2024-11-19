#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int>s;
        for (int i = 0; i < n; ++i) {
            s.insert(candyType[i]);
        }
        return min(n/2,(int)s.size());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}