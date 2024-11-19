#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        vector<int>v(arr.size()+1);
        for (int i = 0; i < arr.size(); ++i) {
            v[i+1]=v[i]+arr[i];
            ans+=arr[i];
        }
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 3; i+j < v.size(); j+=2) {
                ans+=v[i+j]-v[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}