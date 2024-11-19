#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    void hui(int left,int right,int k){
        if (v.size()==k){
            vv.push_back(v);
            return;
        }
        for (int i = left; i <= right- (k - v.size()) + 1; ++i) {
            v.push_back(i);
            hui(i+1,right,k);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        hui(1,n,k);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}