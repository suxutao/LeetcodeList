#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FindSumPairs {
public:
    vector<int>v1,v2;
    unordered_map<int,int>m;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1=nums1;
        v2=nums2;
        for (auto &item: v2)
            ++m[item];
    }
    
    void add(int index, int val) {
        --m[v2[index]];
        v2[index]+=val;
        ++m[v2[index]];
    }
    
    int count(int tot) {
        int ans=0;
        for (int i = 0; i < v1.size(); ++i) {
            ans+=m[tot-v1[i]];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}