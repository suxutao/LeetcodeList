#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int arr[1001]={0};
        for (auto&i:trips) {
            for (int j = i[1]; j < i[2]; ++j) {
                arr[j]+=i[0];
            }
        }
        for (int i = 0; i < 1001; ++i) {
            if (capacity<arr[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}