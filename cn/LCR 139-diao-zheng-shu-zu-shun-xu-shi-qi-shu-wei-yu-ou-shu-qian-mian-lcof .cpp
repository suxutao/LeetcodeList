#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> trainingPlan(vector<int>& actions) {
        vector<int>v(actions.size());
        int a=0;
        for (int i = 0; i < actions.size(); i++) {
            if (actions[i]&1)
                v[a++]=actions[i];
        }
        for (int i = 0; i < actions.size(); i++) {
            if (!(actions[i]&1))
                v[a++]=actions[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}