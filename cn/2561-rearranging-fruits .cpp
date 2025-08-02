#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        int l1=0,l2=0,mn=INT_MAX;
        ll ans=0;
        map<int,int>m;
        vector<ll>v1,v2;
        for (auto &item: basket1){
            mn= min(mn,item);
            ++m[item];
        }
        for (auto &item: basket2){
            mn= min(mn,item);
            ++m[item];
        }
        for (auto &[_,a]: m){
            if (a&1)
                return -1;
            a/=2;
        }
        for (auto &item: basket1){
            --m[item];
        }
        for (auto &[_,a]: m){
            if (a>0){
                for (int i = 0; i < a; ++i) {
                    v1.push_back(_);
                }
            }else if (a<0){
                for (int i = 0; i < -a; ++i) {
                    v2.push_back(_);
                }
            }
        }
        for (int i = 0; i < v1.size(); ++i) {
            if (v1[l1]<=v2[l2]){
                if (v1[l1]>=2*mn)
                    ans+=2*mn;
                else
                    ans+=v1[l1++];
            }else{
                if (v2[l2]>=2*mn)
                    ans+=2*mn;
                else
                    ans+=v2[l2++];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}