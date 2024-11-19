#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        map<int,int>m1,m2;
        int sum1=0,sum2=0,ans=0,cha;
        if (nums1.size()*6<nums2.size()||nums2.size()*6<nums1.size())
            return -1;
        for (int i = 0; i < nums1.size(); ++i) {
            m1[nums1[i]]++;
            sum1+=nums1[i];
        }
        for (int i = 0; i < nums2.size(); ++i) {
            m2[nums2[i]]++;
            sum2+=nums2[i];
        }
        if (sum1>sum2){
            swap(nums1,nums2);
            swap(m1,m2);
            swap(sum1,sum2);
        }
        cha=sum2-sum1;
        for (int i = 6; i>1 ; --i) {
            while (cha>0){
                if (!m1[7-i]&&!m2[i]){
                    break;
                }
                ++ans;
                cha-=i-1;
                if (m1[7-i])
                    --m1[7-i];
                else if (m2[i])
                    --m2[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}