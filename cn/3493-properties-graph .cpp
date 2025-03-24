#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[105]{};
    int query(int x){
        return x==fa[x]?x:fa[x]=query(fa[x]);
    }
    void merge_set(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y){
            fa[x]=y;
        }
    }
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        int n=properties.size();
        unordered_set<int>ans;
        vector<unordered_set<int>>vs(n);
        for (int i = 0; i < n; ++i) {
            vs[i]=unordered_set<int>(properties[i].begin(),properties[i].end());
            fa[i]=i;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i==j)
                    continue;
                int cnt=0;
                for (int l = 1; l <= 100; ++l) {
                    if (vs[i].contains(l)&&vs[j].contains(l)){
                        ++cnt;
                        if (cnt>=k)
                            break;
                    }
                }
                if (cnt>=k)
                    merge_set(i,j);
            }
        }
        for (int i = 0; i < n; ++i) {
            ans.insert(query(i));
        }
        return ans.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}