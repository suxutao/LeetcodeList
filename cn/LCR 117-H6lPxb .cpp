#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[305],l;
    int find_set(int x){
        return x==fa[x]?x:fa[x]= find_set(fa[x]);
    }
    bool check(string&a,string&b) {
        int num = 0;
        for (int i = 0; i < l; i++) {
            if (a[i] != b[i]) {
                num++;
                if (num > 2) {
                    return false;
                }
            }
        }
        return true;
    }
    int numSimilarGroups(vector<string>& strs) {
        unordered_set<int>se;
        l=strs[0].size();
        for (int i = 0; i < strs.size(); ++i) {
            fa[i]=i;
        }
        for (int i = 0; i < strs.size(); ++i) {
            for (int j = i+1; j < strs.size(); ++j) {
                int a= find_set(i),b= find_set(j);
                if (a!=b&&check(strs[i],strs[j])){
                    fa[b]=a;
                }
            }
        }
        for (int i = 0; i < strs.size(); ++i) {
            se.insert(find_set(i));
        }
        return se.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}