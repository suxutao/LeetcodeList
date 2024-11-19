#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    vector<bool>vb;
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
                if (i>0&&can[i]==can[i-1]&&!vb[i-1])
                    continue;
                v.push_back(can[i]);
                vb[i]=true;
                hui(can, target, i + 1);
                vb[i]=false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vb.resize(candidates.size(), false);
        hui(candidates,target,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}