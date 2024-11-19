#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        vector<int>v1(arr.size(),1);
        vector<int>v2(arr.size(),1);
        int ans=0;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i]>arr[i-1])
                v1[i]= max(v1[i],v1[i-1]+1);
        }
        for (int i = arr.size()-2; i >= 0; --i) {
            if (arr[i]>arr[i+1])
                v2[i]= max(v2[i],v2[i+1]+1);
        }
        for (int i = 0; i < arr.size(); ++i) {
            if (v1[i]>1&&v2[i]>1)
                ans= max(ans,v1[i]+v2[i]-1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}