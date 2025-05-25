#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool f(ll a){
        if (a==1)
            return false;
        for (int i = 2; i <= sqrt(a); ++i) {
            if (a%i==0)
                return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        ll n=s.size(),ans=0;
        unordered_set<ll>us;
        priority_queue<ll>q;
        for (int i = 0; i < n; ++i) {
            ll t=0;
            for (int j = i; j < n; ++j) {
                t=t*10+s[j]-'0';
                if (!us.contains(t)&&f(t)){
                    us.insert(t);
                    q.push(t);
                }
            }
        }
        for (int i = 0; i < 3 && !q.empty(); ++i) {
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