#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[100005];
    int find_set(int x){
        return x==fa[x]?x:fa[x]=find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int ans=0;
        unordered_map<int,unordered_map<int,int>>m;
        for (int i = 0; i < target.size(); ++i) {
            fa[i]=i;
        }
        for (auto &i: allowedSwaps){
            merge_set(i[0],i[1]);
        }
        for (int i = 0; i < target.size(); ++i) {
            fa[i]=find_set(i);
            m[fa[i]][source[i]]++;
            m[fa[i]][target[i]]--;
        }
        for (auto &[_,v]: m){
            for (auto &[_,a]: v){
                ans+=abs(a);
            }
        }
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}