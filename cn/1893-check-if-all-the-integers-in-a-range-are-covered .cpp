#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int arr[55]{};
        for (auto &i: ranges){
            arr[i[0]]++;
            arr[i[1]+1]--;
        }
        for (int i = 1; i <= right; ++i) {
            arr[i]+=arr[i-1];
            if (i>=left&&arr[i]==0)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}