#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int>m;
        vector<vector<int>>v(n, vector<int>(n));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            m[arr[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i - 1; j >= 0 && arr[j] * 2 > arr[i]; j--) {
                int k = -1;
                if (m.count(arr[i] - arr[j])) {
                    k = m[arr[i] - arr[j]];
                }
                if (k >= 0) {
                    v[j][i] = max(v[k][j] + 1, 3);
                }
                ans = max(ans, v[j][i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}