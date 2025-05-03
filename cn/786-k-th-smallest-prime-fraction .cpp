#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<double>v;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                v.push_back((double)arr[i]/arr[j]);
            }
        }
        ranges::sort(v);
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if ((double)arr[i]/arr[j]==v[k-1]){
                    return {arr[i],arr[j]};
                }
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}