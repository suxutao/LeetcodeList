#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(2);
        unordered_map<int,int>m1,m2;
        for (auto &i: nums1){
            ++m1[i];
        }
        for (auto &i:nums2) {
            ++m2[i];
            if (m1[i])
                v[1]++;
        }
        for (auto &i: nums1){
            if (m2[i])
                v[0]++;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}