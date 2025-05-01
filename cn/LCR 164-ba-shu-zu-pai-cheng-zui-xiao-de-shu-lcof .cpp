#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string crackPassword(vector<int>& password) {
        string ans;
        vector<string>vs;
        for (auto &item: password){
            vs.push_back(to_string(item));
        }
        ranges::sort(vs,[&](auto&a,auto&b){
            return a+b<b+a;
        });
        for (auto &item: vs){
            ans+=item;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}