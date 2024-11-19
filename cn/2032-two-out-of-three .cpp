#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>v;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3(nums3.begin(),nums3.end());
        unordered_map<int,int>m;
        for (auto &item: s1)
            ++m[item];
        for (auto &item: s2)
            ++m[item];
        for (auto &item: s3)
            ++m[item];
        for (auto &[a,b]: m){
            if (b>=2)
                v.push_back(a);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}