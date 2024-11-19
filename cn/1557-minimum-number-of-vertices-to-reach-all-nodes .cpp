#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,int>m;
        vector<int>v;
        for (const auto &item: edges){
            m[item[1]]=1;
        }
        for (int i = 0; i < n; ++i) {
            if (!m[i])
                v.emplace_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}