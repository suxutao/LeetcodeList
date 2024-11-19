#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int kIncreasing(vector<int>& arr, int k) {
        int ans=0;
        for (int i = 0; i < k; ++i) {
            vector<int>v;
            for (int j = i; j < arr.size(); j+=k) {
                v.push_back(arr[j]);
            }
            auto end=v.begin();
            for (int j = 0; j < v.size(); ++j) {
                auto it=upper_bound(v.begin(), end,v[j]);
                *it=v[j];
                if (it==end)
                    end++;
            }
            ans+=v.end()-end;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}