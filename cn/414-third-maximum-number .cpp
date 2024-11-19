#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    set<int>s;
    int thirdMax(vector<int>& nums) {
        for (int i:nums) {
            s.insert(i);
            if (s.size()>3)
                s.erase(s.begin());
        }
        if (s.size()==3)
            return *s.begin();
        else
            return *s.rbegin();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}