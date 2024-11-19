#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int>v(3);
        for (auto &i: triplets){
            if (i[0]<=target[0]&&i[1]<=target[1]&&i[2]<=target[2]){
                v[0]= max(v[0],i[0]);
                v[1]= max(v[1],i[1]);
                v[2]= max(v[2],i[2]);
            }
        }
        return target==v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}