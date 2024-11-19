#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for (int i = 0; i < arr.size();) {
            int pos=-1;
            for (int j = 0; j < pieces.size(); ++j) {
                if (pieces[j][0]==arr[i]){
                    pos=j;
                    break;
                }
            }
            if (~pos){
                for (int j = 0; j < pieces[pos].size(); ++j) {
                    if (arr[i]==pieces[pos][j]){
                        ++i;
                    }else{
                        return false;
                    }
                }
            }else{
                return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}