#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>fa;
    int query(int x){
        return fa[x]==x?x:fa[x]=query(fa[x]);
    }
    void merge(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y)
            fa[x]=y;
    }
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<int>ans,xian(c+1);
        unordered_map<int,priority_queue<int,vector<int>,greater<>>>m;
        fa.resize(c+1);
        for (int i = 1; i <= c; ++i) {
            fa[i]=i;
        }
        for (auto &i: connections){
            merge(i[0],i[1]);
        }
        for (int i = 1; i <= c; ++i) {
            m[query(i)].push(i);
        }
        for (auto &i: queries){
            if (i[0]==1){
                if (xian[i[1]]){
                    int t= query(i[1]);
                    while (!m[t].empty()&&xian[m[t].top()]){
                        m[t].pop();
                    }
                    if (m[t].empty())
                        ans.push_back(-1);
                    else
                        ans.push_back(m[t].top());
                }else{
                    ans.push_back(i[1]);
                }
            }else{
                xian[i[1]]=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}