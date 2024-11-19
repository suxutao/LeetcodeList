#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll=long long;
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        ll n1=nums1.size(),n2=nums2.size(),sum=0;
        ll p1=0,p2=0,s1=0,s2=0;
        vector<ll>a,b;
        while (p1<n1&&p2<n2){
            if (nums1[p1]==nums2[p2]){
                sum+=nums1[p1];
                p1++;p2++;
                a.push_back(s1);
                b.push_back(s2);
                s1=s2=0;
            }else if (nums1[p1]>nums2[p2]){
                s2+=nums2[p2++];
            }else{
                s1+=nums1[p1++];
            }
        }
        while (p1<n1){
            s1+=nums1[p1++];
        }
        while (p2<n2){
            s2+=nums2[p2++];
        }
        a.push_back(s1);b.push_back(s2);
        int n=a.size();
        for (int i = 0; i < n; ++i) {
            sum=(sum+max(a[i],b[i]))%N;
        }
        return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}