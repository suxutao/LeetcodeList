#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size()&1)
            return {};
        vector<int>pre;
        vector<bool>vis(changed.size());
        sort(changed.begin(), changed.end());
        int j=1;
        for (int i = 0; i < changed.size(); ++i) {
            if (!vis[i]){
                bool b= false;
                vis[i]=1;
                for (; j < changed.size(); ++j) {
                    if (!vis[j]&&changed[j]==2*changed[i]){
                        vis[j]=1;
                        b= true;
                        pre.push_back(changed[i]);
                        break;
                    }
                }
                if (!b)
                    return {};
            }
        }
        return pre;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}