#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>q1,q2;
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        for (int i = 0; i < 32&&left>>i; ++i) {
            if ((left>>i)&1)
                q1.push_back(i);
        }
        for (int i = 0; i < 32&&right>>i; ++i) {
            if ((right>>i)&1)
                q2.push_back(i);
        }
        while (!q1.empty()&&!q2.empty()&&q1.back()==q2.back()){
            ans+=(1<<q1.back());
            q1.pop_back();q2.pop_back();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}