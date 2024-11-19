#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        queue<int>q;
        map<pair<int,int>,int>m;
        int ans=0;
        q.push(0);
        while (!q.empty()){
            int k=q.front(),s=q.size();
            for (int i = 0; i < grid.size(); ++i) {
                if (grid[i][k]&&!m[{i,k}]){
                    m[{i,k}]=1;
                    q.push(i);
                }
            }
            if (s==q.size())
                return k;
            ans=q.back();
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}