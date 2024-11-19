#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findRepeatDocument(vector<int>& documents) {
        unordered_map<int,int>m;
        for (auto &i: documents){
            ++m[i];
            if (m[i]==2)
                return i;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}