#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct node{
        bool fin=false;
        int son[26];
    }t[30005];
    int cnt=1;
    string longestWord(vector<string>& words) {
        string s;
        sort(words.begin(), words.end());
        for (auto &j: words){
            int now=0;
            for (int i = 0; i < j.size(); ++i) {
                if (t[now].son[j[i]-'a']==0)
                    t[now].son[j[i]-'a']=cnt++;
                now=t[now].son[j[i]-'a'];
                if (i==j.size()-2&&t[now].fin){
                    if (j.size()>s.size()){
                        s=j;
                    }else if (j.size()==s.size()&&j<s){
                        s=j;
                    }
                }
                if (i==j.size()-1){
                    t[now].fin=1;
                    if (i==0&&s.empty()){
                        s=j;
                    }else if (i==0&&s>j){
                        s=j;
                    }
                }else if (t[now].fin==0){
                    break;
                }
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}