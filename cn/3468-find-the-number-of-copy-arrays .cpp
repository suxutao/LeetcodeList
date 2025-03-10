#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int shang=INT_MAX,xia=INT_MIN,n=original.size();
        for (int i = 0; i < n; ++i) {
            bounds[i][0]-=original[i];
            bounds[i][1]-=original[i];
            shang= min(shang,bounds[i][1]);
            xia= max(xia,bounds[i][0]);
        }
        return max(0,shang-xia+1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}