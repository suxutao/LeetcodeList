#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int l=0,r=removable.size()+1,mid;
        auto check=[&](int k){
            string ss=s;
            int x=0,y=0;
            for (int i = 0; i < k; ++i) {
                ss[removable[i]]='0';
            }
            while (x<s.size()&&y<p.size()){
                if (ss[x]==p[y])
                    ++y;
                ++x;
            }
            return y==p.size();
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}