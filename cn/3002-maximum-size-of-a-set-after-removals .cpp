#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end()),s;
        int n=nums1.size();
        for (auto &item: nums1)
            s.insert(item);
        for (auto &item: nums2)
            s.insert(item);
        int com=-s.size()+s1.size()+s2.size(),n1= min<int>(n/2,s1.size()-com),n2= min<int>(n/2,s2.size()-com);
        return n1+n2+min<int>(com,n-n1-n2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}