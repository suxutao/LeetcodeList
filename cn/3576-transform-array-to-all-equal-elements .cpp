#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(vector<int>& v, int k,int x){
        int n=v.size(),cnt=0,pre=-1,t=0;
        for (int i = 0; i < n; ++i) {
            if (v[i]==x){
                ++cnt;
                if (cnt%2==0){
                    t+=i-pre;
                    if (t>k)
                        return false;
                }
                pre=i;
            }
        }
        if (cnt&1)
            return false;
        return true;
    }
    bool canMakeEqual(vector<int>& nums, int k) {
        return f(nums,k,1)||f(nums,k,-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}