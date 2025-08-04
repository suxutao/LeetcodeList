#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minTime(string s, vector<int>& order, int k) {
        int n=s.size(),l=0,r=n;
        auto check=[&](int x)->bool{
            long long sum=0,pre=-1;
            string t(n,'a');
            for (int i = 0; i <= x; ++i) {
                t[order[i]]='*';
            }
            for (int i = 0; i < n; ++i) {
                if (t[i]=='*'){
                    sum+=i+1;
                    pre=i;
                }else{
                    sum+=pre+1;
                }
            }
            return sum>=k;
        };
        if (!check(n-1))
            return -1;
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}