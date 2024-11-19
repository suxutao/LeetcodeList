#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MagicDictionary {
public:
    struct node{
        bool fin;
        node* child[26]={};
        node(){}
        node(bool fin):fin(fin){}
    };
    node*head;
    MagicDictionary() {
        head=new node(0);
    }

    void buildDict(vector<string> dictionary) {
        for (auto &i: dictionary){
            node*p=head;
            for (char j : i) {
                if (!p->child[j-'a'])
                    p->child[j-'a']=new node(0);
                p=p->child[j-'a'];
            }
            p->fin=1;
        }
    }
    bool dfs(string&s,int pos,bool huan,node*p){
        if (pos==s.size()){
            return huan&&p->fin;
        }
        if (!p->child[s[pos]-'a']&&huan)
            return false;
        int idx = s[pos] - 'a';
        if (p->child[idx]) {
            if (dfs(s, pos + 1, huan,p->child[idx])) {
                return true;
            }
        }
        if (!huan) {
            for (int i = 0; i < 26; ++i) {
                if (i != idx && p->child[i]) {
                    if (dfs(s, pos + 1, true,p->child[i])) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool search(string searchWord) {
        node*p=head;
        return dfs(searchWord,0,0,p);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}