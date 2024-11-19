#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(), hand.end());
        unordered_map<int,int>m;
        set<int>s(hand.begin(),hand.end());
        for (auto &item: hand)
            ++m[item];
        for (auto i = s.begin(); i!=s.end(); ++i) {
            if (m[*i]){
                for (int j = 1; j < groupSize; ++j) {
                    if (m[*i+j]<m[*i])
                        return false;
                    m[*i+j]-=m[*i];
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}