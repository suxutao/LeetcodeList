#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int arr[101]{};
        for (int i = 0; i < order.size(); ++i) {
            arr[order[i]]=i;
        }
        ranges::sort(friends,{},[&](const auto& v) { return arr[v]; });
        return friends;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}