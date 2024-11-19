#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class WordDictionary {
public:
    struct node{
        bool end;
        node* child[26];
    };
    node gen;
    WordDictionary() {
        gen={false, {nullptr}};
    }
    
    void addWord(string word) {
        node*p=&gen;
        for (char i:word) {
            if (p->child[i-'a']== nullptr)
                p->child[i-'a']=new node(false);
            p=p->child[i-'a'];
        }
        p->end= true;
    }
    bool s(string&w,node*p,int pos){
        if (pos==w.size())
            return false;
        char i=w[pos];
        if (i=='.'){
            bool b= false;
            for (int j = 0; j < 26; ++j) {
                if (p->child[j]) {
                    if (p->child[j]->end&&pos==w.size()-1)
                        return true;
                    b = b || s(w, p->child[j], pos + 1);
                }
            }
            return b;
        }else if (p->child[i-'a']){
            if (p->child[i-'a']->end&&pos==w.size()-1)
                return true;
            return s(w,p->child[i-'a'],pos+1);
        }else{
            return false;
        }
    }
    bool search(string word) {
        return s(word,&gen,0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}