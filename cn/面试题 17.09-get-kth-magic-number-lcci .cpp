#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int getKthMagicNumber(int k) {
        priority_queue<ll,vector<ll>,greater<>>q;
        unordered_set<ll>s;
        ll arr[3]={3,5,7};
        q.push(1);
        for (int i = 0; i < k-1; ++i) {
            ll t=q.top();
            for (auto &j: arr){
                if (!s.contains(t*j)){
                    s.insert(t*j);
                    q.push(t*j);
                }
            }
            q.pop();
        }
        return q.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}