#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans=0;
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);
        for (int i = 0; i < colors.size() - 2; ++i) {
            if (colors[i]&&!colors[i+1]&&colors[i+2]||!colors[i]&&colors[i+1]&&!colors[i+2])
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}