#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]=(double)dist[i]/speed[i];
        }
        ranges::sort(v);
        for (int i = 0; i < n; ++i) {
            if (v[i]<=i){
                return i;
            }
        }
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}