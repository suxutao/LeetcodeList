#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPre(string&a,string&b){
        int n= min(a.size(),b.size()),ans=0;
        for (int i = 0; i < n; ++i) {
            if (a[i]!=b[i])
                break;
            ++ans;
        }
        return ans;
    }
    vector<int> longestCommonPrefix(vector<string>& words, int k) {
        int n=words.size(),da=0,erda=0;
        pair<int,int>p;
        vector<int>ans(n);
        vector<pair<string,int>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={words[i],i};
        }
        ranges::sort(v);
        for (int i = 0; i <= n - k; ++i) {
            int value= maxPre(v[i].first,v[i+k-1].first);
            if (value>=da){
                p={i,i+k-1};
                erda=da;
                da=value;
            }else if (value>erda){
                erda=value;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (i<p.first||i>p.second){
                ans[v[i].second]=da;
            }else{
                ans[v[i].second]=erda;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}