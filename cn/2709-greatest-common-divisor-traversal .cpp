#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[100005]{};
    unordered_map<int,vector<int>>m;
    int find_set(int x){
        return x==fa[x]?x:fa[x]=find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    bool canTraverseAllPairs(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 2; j*j <= nums[i]; ++j) {
                if (nums[i]%j==0){
                    m[j].push_back(i);
                    while (nums[i]%j==0)
                        nums[i]/=j;
                }
            }
            if (nums[i]>1&&!binary_search(m[nums[i]].begin(), m[nums[i]].end(),i))
                m[nums[i]].push_back(i);
        }
        for (auto &[a,b]: m){
            for (int i = 1; i < b.size(); ++i) {
                merge_set(b[0],b[i]);
            }
        }
        for (int i = 0; i < n; ++i) {
            find_set(i);
        }
        int t=find_set(0);
        for (int i = 1; i < n; ++i) {
            if (find_set(i)!=t)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}