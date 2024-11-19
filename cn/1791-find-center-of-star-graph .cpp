#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        multiset<int>s;
        for (const auto &item: edges){
            s.insert(item[0]);
            s.insert(item[1]);
        }
        for (int i = 1; i <= edges.size()+1; ++i) {
            if (s.count(i)==edges.size())
                return i;
        }
        return 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}