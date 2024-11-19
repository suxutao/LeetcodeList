#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>m;
        int count=0;
        for (int a:nums1) {
            for (int b:nums2) {
                m[a+b]++;
            }
        }
        for (int a:nums3) {
            for (int b:nums4) {
                if (m.find(-a-b)!=m.end())
                    count+=m[-a-b];
            }
        }
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={0};
    Solution().fourSumCount(v,v,v,v);
    return 0;
}