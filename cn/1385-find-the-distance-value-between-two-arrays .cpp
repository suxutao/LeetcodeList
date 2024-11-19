#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        sort(arr2.begin(), arr2.end());
        for (auto &i: arr1){
            if (i<arr2.front()||i>arr2.back()){
                if (arr2.front()-i>d||i-arr2.back()>d){
                    ++ans;
                }
                continue;
            }
            int t= lower_bound(arr2.begin(), arr2.end(),i)-arr2.begin();
            if (abs(arr2[t]-i)>d&& abs(arr2[t-1]-i)>d)
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}