#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr['z'+1]={0};
        for (auto &item: allowed){
            arr[item]=1;
        }
        int ans=0;
        for (int i = 0; i < words.size(); ++i) {
            bool ji= true;
            for (int j = 0; j < words[i].size(); ++j) {
                if (arr[words[i][j]]==0) {
                    ji= false;
                    break;
                }
            }
            if (ji)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}