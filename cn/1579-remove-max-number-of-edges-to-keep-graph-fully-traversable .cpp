#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[100005],fb[100005];
    int find_seta(int x){
        return x==fa[x]?x:fa[x]= find_seta(fa[x]);
    }
    int find_setb(int x){
        return x==fb[x]?x:fb[x]= find_setb(fb[x]);
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        int ans=0,pos1,pos2,a,b,x,y;
        for (int i = 1; i <= n; ++i) {
            fa[i]=i;fb[i]=i;
        }
        sort(edges.begin(), edges.end());
        pos1=lower_bound(edges.begin(), edges.end(),vector<int>{3})-edges.begin();
        pos2=lower_bound(edges.begin(), edges.end(),vector<int>{2})-edges.begin();
        for (int i = pos1; i < edges.size(); ++i) {
            x=edges[i][1],y=edges[i][2];
            a= find_seta(x);b= find_seta(y);
            find_setb(x);find_setb(y);
            if (a!=b){
                fa[b]=a;fb[b]=a;
            }else{
                ++ans;
            }
        }
        for (int i = pos2; i < pos1; ++i) {
            x=edges[i][1],y=edges[i][2];
            a=find_setb(x);b=find_setb(y);
            if (a!=b){
                fb[b]=a;
            }else{
                ++ans;
            }
        }
        for (int i = 0; i < pos2; ++i) {
            x=edges[i][1],y=edges[i][2];
            a=find_seta(x);b=find_seta(y);
            if (a!=b){
                fa[b]=a;
            }else{
                ++ans;
            }
        }
        set<int>s1,s2;
        for (int i = 1; i <= n; ++i) {
            s1.insert(find_seta(i));
            s2.insert(find_setb(i));
        }
        if (s1.size()==1&&s2.size()==1)
            return ans;
        else
            return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{3,1,2},{3,3,4},{1,1,3},{2,2,4}};
    Solution().maxNumEdgesToRemove(4,v);
    return 0;
}