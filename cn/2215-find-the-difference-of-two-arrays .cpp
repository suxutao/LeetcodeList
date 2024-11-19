#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>a,b;
        set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(), back_inserter(a));
        set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(), back_inserter(b));
        v.push_back(a);v.push_back(b);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}