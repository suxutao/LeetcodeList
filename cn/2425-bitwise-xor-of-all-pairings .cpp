#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        if (n1%2==0&&n2%2==0){
            return 0;
        }else if (n1%2==0||n2%2==0){
            if (n1%2==0)
                return accumulate(nums1.begin(),nums1.end(),0,bit_xor<>());
            else
                return accumulate(nums2.begin(),nums2.end(),0,bit_xor<>());
        }else{
            int a=accumulate(nums1.begin(),nums1.end(),0,bit_xor<>());
            return accumulate(nums2.begin(),nums2.end(),a,bit_xor<>());
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}