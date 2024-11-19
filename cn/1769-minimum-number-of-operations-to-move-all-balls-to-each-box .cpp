#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v(boxes.size(),0);
        for (int i = 0; i < boxes.size(); ++i) {
            for (int j = 0; j < v.size(); ++j) {
                if (boxes[j]=='1')
                    v[i]+= abs(i-j);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}