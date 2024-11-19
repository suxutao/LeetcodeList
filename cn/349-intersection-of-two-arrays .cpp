#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arr1[1001]={0};
        int arr2[1001]={0};
        vector<int>v;
        for (int i = 0; i < nums1.size(); ++i) {
            arr1[nums1[i]]=1;
        }
        for (int i = 0; i < nums2.size(); ++i) {
            arr2[nums2[i]]=1;
        }
        for (int i = 0; i < 1001; ++i) {
            if (arr1[i]&&arr2[i])
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}