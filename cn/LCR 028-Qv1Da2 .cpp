#include "../../../stdc.h"
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void dfs(Node*h,stack<Node*>n,Node*p){
        if (!h) {
            if (n.empty())
                return;
            else {
                Node*t=n.top();
                n.pop();
                p->next=t;
                t->prev=p;
                dfs(t, n,p);
            }
        }else{
            if (!h->child) {
                dfs(h->next,n,h);
            }else{
                if (h->next){
                    n.push(h->next);
                    h->next=h->child;
                    h->next->prev=h;
                    h->child=nullptr;
                    dfs(h->next,n,h);
                }else{
                    h->next=h->child;
                    h->next->prev=h;
                    h->child=nullptr;
                    dfs(h->next,n,h);
                }
            }
        }
    }
    Node* flatten(Node* head) {
        dfs(head, {}, nullptr);
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}