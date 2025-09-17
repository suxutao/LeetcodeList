#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Xor{
    vector<int>b;
public:
    Xor(int n):b(n){}
    void insert(int x){
        for (int i = b.size() - 1; i >= 0; --i) {
            if (x>>i){
                if (b[i]==0){
                    b[i]=x;
                    break;
                }
                x^=b[i];
            }
        }
    }
    int max_xor(){
        int ans=0;
        for (int i = b.size() - 1; i >= 0; --i) {
            ans= max(ans,ans^b[i]);
        }
        return ans;
    }
};
class Solution {
public:
    int maxXorSubsequences(vector<int>& nums) {
        int n=nums.size();
        Xor x(bit_width((unsigned)ranges::max(nums)));
        for (int i = 0; i < n; ++i) {
            x.insert(nums[i]);
        }
        return x.max_xor();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}