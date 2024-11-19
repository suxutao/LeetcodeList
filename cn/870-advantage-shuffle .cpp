#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),l=0,r=n-1;
        vector<int>v(n),u(n);
        unordered_map<int,deque<int>>m;
        for (int i = 0; i < n; ++i) {
            m[nums2[i]].push_back(i);
        }
        sort(nums1.begin(), nums1.end(),greater<>());
        sort(nums2.begin(), nums2.end(),greater<>());
        for (int i = 0; i < n; ++i) {
            if (nums1[l]>nums2[i]){
                v[i]=nums1[l];
                ++l;
            }else{
                v[i]=nums1[r];
                --r;
            }
        }
        for (int i = 0; i < n; ++i) {
            u[m[nums2[i]].front()]=v[i];
            m[nums2[i]].pop_front();
        }
        return u;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}