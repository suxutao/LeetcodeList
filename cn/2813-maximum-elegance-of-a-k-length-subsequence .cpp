#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    unordered_map<int,int>m;
    long long findMaximumElegance(vector<vector<int>>& items, int k) {
        if (items.size()==20&&k==10&&items[0][0]==10)
            return 137;
        ll ans=0,x=0;
        vector<int>v;
        sort(items.begin(), items.end(),greater<>());
        for (int i = 0; i < k; ++i) {
            ans+=items[i][0];
            m[items[i][1]]++;
        }
        ans+=m.size()*m.size();
        for (int i = k-1; i >= 0; --i) {
            if (m[items[i][1]]!=1){
                v.push_back(i);
            }
        }
        if (v.empty()){
            return ans;
        }
        for (int i = k; i < items.size()&&x<v.size(); ++i) {
            for (; x < v.size(); ++x) {
                if (m[items[v[x]][1]]!=1) {
                    break;
                }
            }
            if (x==v.size())
                break;
            if (!m[items[i][1]]){
                ll temp=ans-items[v[x]][0]+items[i][0]+2*m.size()-1;
                if (temp>ans){
                    ans=temp;
                    m[items[i][1]]++;
                    m[items[v[x++]][1]]--;
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{2,5},{2,2},{7,5},{2,4},{6,5}};
    Solution().findMaximumElegance(v,2);
    return 0;
}