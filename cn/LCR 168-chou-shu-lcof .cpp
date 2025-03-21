#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int nthUglyNumber(int n) {
        if (n==1)
            return 1;
        unordered_set<ll>s{2,3,5};
        priority_queue<ll,vector<ll>,greater<>>q;
        q.push(2);
        q.push(3);
        q.push(5);
        for (int i = 0; i < n-2; ++i) {
            auto a=q.top();
            q.pop();
            ll x=a*2,y=a*3,z=a*5;
            if (!s.contains(x)){
                s.insert(x);
                q.push(x);
            }
            if (!s.contains(y)){
                s.insert(y);
                q.push(y);
            }
            if (!s.contains(z)){
                s.insert(z);
                q.push(z);
            }
        }
        return q.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}