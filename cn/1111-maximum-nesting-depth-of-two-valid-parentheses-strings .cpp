#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>v(seq.size());
        int depth=0;
        for (int i = 0; i < seq.size(); ++i) {
            if (seq[i]=='('){
                depth++;
                v[i]=depth&1;
            }else{
                v[i]=depth&1;
                depth--;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}