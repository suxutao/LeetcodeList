#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int,greater<>>m;
        for (auto &item: arr){
            ++m[item];
        }
        for (auto &[a,b]: m){
            if (a==b)
                return a;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}