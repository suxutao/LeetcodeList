#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int f(int n){
        int ans=0;
        while (n){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& v) {
        int n=v.size(),ans=0;
        unordered_map<int,int>m;
        unordered_set<int>s;
        for (int i = 0; i < n; ++i) {
            m[v[i]]=i;
        }
        ranges::sort(v,[&](auto&a,auto&b){
            int c= f(a),d= f(b);
            if (c==d)
                return a<b;
            return c<d;
        });
        for (int i = 0; i < n; ++i) {
            if (s.contains(v[i]))
                continue;
            int t=i,h=v[i];
            while (h!=v[m[v[t]]]){
                s.insert(v[m[v[t]]]);
                t=m[v[t]];
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{834417347,409793394,733228019,111420659,540164947,824740442,639659967};
    Solution().minSwaps(v);
    return 0;
}