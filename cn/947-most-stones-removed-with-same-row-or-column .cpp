#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    map<pii,int>ma;
    map<pii,pii>fa;
    map<int,vector<pii>>hang,lie;
    pii find_set(pii x){
        return fa[x]==x?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(pii a,pii b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b){
            fa[b]=a;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int ans=0;
        for (auto &i: stones){
            fa[{i[0],i[1]}]={i[0],i[1]};
            hang[i[0]].emplace_back(i[0],i[1]);
            lie[i[1]].emplace_back(i[0],i[1]);
        }
        for (auto &[_,a]: hang){
            for (int i = 1; i < a.size(); ++i) {
                merge_set(a[0],a[i]);
            }
        }
        for (auto &[_,a]: lie){
            for (int i = 1; i < a.size(); ++i) {
                merge_set(a[0],a[i]);
            }
        }
        for (auto &i: stones){
            ++ma[find_set({i[0],i[1]})];
        }
        for (auto &[_,a]: ma){
            ans+=a-1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{0,0},{0,2},{1,1},{2,0},{2,2}};
    Solution().removeStones(v);
    return 0;
}