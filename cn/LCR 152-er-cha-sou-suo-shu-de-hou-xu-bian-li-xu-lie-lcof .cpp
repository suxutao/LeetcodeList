#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool dfs(vector<int>v,int l,int r){
        if (l>=r){
            return true;
        }
        int pos=r+1;
        for (int i = l+1; i <= r; ++i) {
            if (v[i]<v[l]){
                if (pos==r+1)
                    pos=i;
            }else{
                if (i>pos)
                    return false;
            }
        }
        if (pos==r+1)
            return dfs(v,l+1,r);
        return dfs(v,l+1,pos-1)&&dfs(v,pos,r);
    }
    bool verifyTreeOrder(vector<int>& postorder) {
        int n=postorder.size();
        ranges::reverse(postorder);
        return dfs(postorder,0,n-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}