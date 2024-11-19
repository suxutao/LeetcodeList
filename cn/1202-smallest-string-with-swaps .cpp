#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[100005]{};
    int find_set(int x){
        return fa[x]==x?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b){
            fa[b]=a;
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        string ans(s.size(),' ');
        unordered_map<int,multiset<char>>m1;
        unordered_map<int,vector<int>>m2;
        for (int i = 0; i < s.size(); ++i) {
            fa[i]=i;
        }
        for (auto &v: pairs){
            merge_set(v[0],v[1]);
        }
        for (int i = 0; i < s.size(); ++i) {
            find_set(i);
            m1[fa[i]].insert(s[i]);
            m2[fa[i]].push_back(i);
        }
        for (auto &[a,b]: m1){
            auto t=b.begin();
            for (auto &i: m2[a]){
                ans[i]=*t++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}