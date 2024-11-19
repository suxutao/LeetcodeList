#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>v;
        for (int i = 1; i < mountain.size()-1; ++i) {
            if (mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}