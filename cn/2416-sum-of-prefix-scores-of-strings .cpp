#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

class Solution {
public:
    struct node{
        short count=0;
        int son[26]{};
    };
    int cnt=1;
    vector<node>t;
    vector<int> sumPrefixScores(vector<string>& words) {
        int n=0;
        for (int i = 0; i < words.size(); ++i) {
            n+=words[i].size();
        }
        t.resize(n+2);
        vector<int>v(words.size());
        for (auto &i: words){
            int now=0;
            for (int j = 0; j < i.size(); ++j) {
                if (t[now].son[i[j]-'a']==0)
                    t[now].son[i[j]-'a']=cnt++;
                now=t[now].son[i[j]-'a'];
                t[now].count++;
            }
        }
        for (int i = 0; i < words.size(); ++i) {
            int now=0;
            for (int j = 0; j < words[i].size(); ++j) {
                now=t[now].son[words[i][j]-'a'];
                v[i]+=t[now].count;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}