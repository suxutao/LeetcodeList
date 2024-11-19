#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    void hui(vector<int>&can,int target,int pos){
        int sum=0;
        for (int i = 0; i < v.size(); ++i) {
            sum+=v[i];
        }
        if (sum==target){
            vv.push_back(v);
            return;
        }else if (sum>target){
            return;
        }else{
            for (int i = pos; i < can.size(); ++i) {
                v.push_back(can[i]);
                hui(can,target,i);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        hui(candidates,target,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}