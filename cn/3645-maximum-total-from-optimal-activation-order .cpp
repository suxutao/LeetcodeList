#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxTotal(vector<int>& value, vector<int>& limit) {
        int n=value.size();
        ll ans=0;
        vector<array<int,2>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={value[i],limit[i]};
        }
        ranges::sort(v,[&](auto&a,auto&b){
            if (a[1]==b[1])
                return a[0]>b[0];
            return a[1]<b[1];
        });
        int r=0,base,cnt;
        while (r<n){
            base=v[r][1];
            cnt=0;
            while (r<n&&base==v[r][1]){
                if (cnt<base)
                    ans+=v[r][0],cnt++;
                ++r;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}