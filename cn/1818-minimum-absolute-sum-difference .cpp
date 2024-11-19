#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    using pii = pair<int, int>;
    const int N=1e9+7;
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),jian=0;
        ll sum=0;
        vector<pii>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={nums1[i],nums2[i]};
            sum+=abs(nums1[i]-nums2[i]);
        }
        sort(v.begin(), v.end());
        for (auto &[a,b]: v){
            auto t1=lower_bound(v.begin(), v.end(),(pii){b,0});
            auto t2=lower_bound(v.rbegin(), v.rend(),(pii){b,0},greater<>());
            if (t1!=v.end())
                jian= max(jian, abs(a-b)-abs(t1->first-b));
            if (t2!=v.rend())
                jian= max(jian, abs(a-b)-abs(t2->first-b));
        }
        return (sum-jian)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}