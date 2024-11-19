#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long pickGifts(vector<int>& gifts, int k) {
        ll ans=0;
        priority_queue<int>q(gifts.begin(),gifts.end());
        for (int i = 0; i < k; ++i) {
            int t=q.top();
            q.pop();
            t= sqrt(t);
            q.push(t);
        }
        while (!q.empty()){
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}