#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class WordFilter {
public:
    struct node{
        int son[26]{};
        vector<int>v;
    }t1[70004],t2[70004];
    int cnt=1;
    WordFilter(vector<string>& words) {
        for (int i = 0; i < words.size(); ++i) {
            string s=words[i];
            int now=0;
            for (int j = 0; j < s.size(); ++j) {
                if (t1[now].son[s[j]-'a']==0)
                    t1[now].son[s[j]-'a']=cnt++;
                now=t1[now].son[s[j]-'a'];
                t1[now].v.push_back(i);
            }
            reverse(s.begin(), s.end());
            now=0;
            for (int j = 0; j < s.size(); ++j) {
                if (t2[now].son[s[j]-'a']==0)
                    t2[now].son[s[j]-'a']=cnt++;
                now=t2[now].son[s[j]-'a'];
                t2[now].v.push_back(i);
            }
        }
    }

    int f(string pref, string suff) {
        int n1=0,n2=0;
        reverse(suff.begin(), suff.end());
        for (int i = 0; i < pref.size(); ++i) {
            if (t1[n1].son[pref[i]-'a']==0)
                return -1;
            n1=t1[n1].son[pref[i]-'a'];
        }
        for (int i = 0; i < suff.size(); ++i) {
            if (t2[n2].son[suff[i]-'a']==0)
                return -1;
            n2=t2[n2].son[suff[i]-'a'];
        }
        int a=t1[n1].v.size()-1,b=t2[n2].v.size()-1;
        while (a>=0&&b>=0){
            if (t1[n1].v[a]>t2[n2].v[b]){
                --a;
            }else if (t1[n1].v[a]==t2[n2].v[b]){
                return t1[n1].v[a];
            }else{
                --b;
            }
        }
        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}