#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[62];
    int query(int x){
        return x==fa[x]?x:fa[x]= query(fa[x]);
    }
    void merge_n(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y)
            fa[x]=y;
    }
    int minSwapsCouples(vector<int>& row) {
        int ans=0,n=row.size();
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        map<int,int>m;
        for (int i = 0; i < n; i+=2) {
            merge_n(row[i]/2,row[i+1]/2);
        }
        for (int i = 0; i < n; ++i) {
            m[query(row[i]/2)]++;
        }
        for (auto &item: m){
            ans+=item.second/2-1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}