#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int arr[10001]={0};
        vector<int>v(nums1.size());
        for (int i = 0; i < nums2.size(); ++i) {
            arr[nums2[i]]=i;
        }
        for (int i = 0; i < nums1.size(); ++i) {
            int a=arr[nums1[i]];
            bool fuyi= true;
            for (int j = a+1; j < nums2.size(); ++j) {
                if (nums2[j]>nums2[a]){
                    fuyi= false;
                    v[i]=nums2[j];
                    break;
                }
            }
            if (fuyi)
                v[i]=-1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}