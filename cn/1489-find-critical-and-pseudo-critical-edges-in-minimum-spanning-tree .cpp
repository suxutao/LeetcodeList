#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[102],set_cnt;
    void init(int n){
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        set_cnt=n;
    }
    int find_set(int x){
        return x==fa[x]?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    bool same(int a,int b){
        a= find_set(a);
        b= find_set(b);
        return a==b;
    }
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<int>>ans(2);
        int val=0,m=edges.size();
        for (int i = 0; i < m; ++i) {
            edges[i].push_back(i);
        }
        sort(edges.begin(), edges.end(),[&](vector<int>&a,vector<int>&b){
            return a[2]<b[2];
        });
        init(n);
        for (int i = 0; i < m; ++i) {
            if (!same(edges[i][0],edges[i][1])){
                val+=edges[i][2];
                merge_set(edges[i][0],edges[i][1]);
            }
        }
        for (int i = 0; i < m; ++i) {
            int cnt=0;
            init(n);
            for (int j = 0; j < m; ++j) {
                if (j==i)
                    continue;
                if (!same(edges[j][0],edges[j][1])){
                    cnt+=edges[j][2];
                    merge_set(edges[j][0],edges[j][1]);
                    set_cnt--;
                }
            }
            if (set_cnt!=1||cnt>val) {
                ans[0].push_back(edges[i][3]);
                continue;
            }
            cnt=edges[i][2];
            init(n);
            set_cnt--;
            merge_set(edges[i][0],edges[i][1]);
            for (int j = 0; j < m; ++j) {
                if (j==i)
                    continue;
                if (!same(edges[j][0],edges[j][1])){
                    cnt+=edges[j][2];
                    merge_set(edges[j][0],edges[j][1]);
                    set_cnt--;
                }
            }
            if (val==cnt)
                ans[1].push_back(edges[i][3]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}