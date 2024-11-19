#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    unordered_map<int,int>m;
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        ll ans=0;
        for (int i = 0; i < nums1.size(); ++i) {
            if (nums1[i]%k==0){
                nums1[i]/=k;
                for (int j = 1; j <= sqrt(nums1[i]); ++j) {
                    if (nums1[i]%j==0){
                        ++m[j];
                        if (j*j< nums1[i])
                            ++m[nums1[i]/j];
                    }
                }
            }
        }
        for (int i = 0; i < nums2.size(); ++i) {
            ans+=m[nums2[i]];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}