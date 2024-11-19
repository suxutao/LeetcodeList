#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>m;
        for (int i = 0; i < paths.size(); ++i) {
            m[paths[i][0]]++;
        }
        for (int i = 0; i < paths.size(); ++i) {
            if (!m[paths[i][1]])
                return paths[i][1];
        }
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}