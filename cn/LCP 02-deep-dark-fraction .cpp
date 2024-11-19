#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> fraction(vector<int>& cont) {
        vector<int>v(2);
        reverse(cont.begin(), cont.end());
        v[0]=cont.front(),v[1]=1;
        for (int i = 1; i < cont.size(); ++i) {
            swap(v[0],v[1]);
            v[0]+=cont[i]*v[1];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}