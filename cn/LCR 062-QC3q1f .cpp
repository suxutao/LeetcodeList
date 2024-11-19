#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Trie {
public:
    struct node{
        char c;
        bool fin=false;
        node*child[26]={};
        node(){}
        node(char c):c(c){}
    };
    node*head;
    Trie() {
        head=new Trie::node('0');
    }

    void insert(string word) {
        node*p=head;
        for(char i:word){
            if (p->child[i-'a']){
                p=p->child[i-'a'];
            }else{
                p->child[i-'a']=new Trie::node(i);
                p=p->child[i-'a'];
            }
        }
        p->fin=true;
    }

    bool search(string word) {
        node*p=head;
        for(char i:word){
            if (p->child[i-'a']){
                p=p->child[i-'a'];
            }else{
                return false;
            }
        }
        return p->fin;
    }

    bool startsWith(string prefix) {
        node*p=head;
        for(char i:prefix){
            if (p->child[i-'a']){
                p=p->child[i-'a'];
            }else{
                return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}