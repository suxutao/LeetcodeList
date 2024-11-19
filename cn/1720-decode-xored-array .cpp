#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v(encoded.size()+1);
        v[0]=first;
        for (int i = 1; i < v.size(); ++i) {
            v[i]=v[i-1]^encoded[i-1];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}