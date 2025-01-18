#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        unordered_set<int>s;
        vector<int>v;
        int p=0,cnt=1;
        while (!s.contains(p)){
            s.insert(p);
            p=(p+k*cnt)%n;
            cnt++;
        }
        for (int i = 1; i <= n; ++i) {
            if (!s.contains(i-1)){
                v.push_back(i);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}