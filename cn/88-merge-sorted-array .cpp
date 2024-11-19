#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (!m){
            for (int i = 0; i < n; ++i) {
                nums1[i]=nums2[i];
            }
        }else if(!n){
            ;
        }else{
            int c=nums1.size();
            int a=m-1,b=n-1;
            while((a+1)&&(b+1)){
                if (nums1[a]>nums2[b]){
                    nums1[--c]=nums1[a--];
                }else{
                    nums1[--c]=nums2[b--];
                }
            }
            if (b+1){
                for (int i = 0; i <= b; ++i) {
                    nums1[i]=nums2[i];
                }
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1={2,0};
    vector<int>v2={1};
    Solution().merge(v1,1,v2,1);
    return 0;
}