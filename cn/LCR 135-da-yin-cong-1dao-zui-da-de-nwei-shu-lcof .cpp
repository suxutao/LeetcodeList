#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countNumbers(int cnt) {
        vector<int>v((int)pow(10,cnt)-1);
        for (int i = 0; i < v.size(); ++i) {
            v[i]=i+1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}