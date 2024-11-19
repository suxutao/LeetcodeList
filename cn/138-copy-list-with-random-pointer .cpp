#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

// Definition for a Node.
//class Node {
//public:
//    int val;
//    Node* next;
//    Node* random;
//
//    Node(int _val) {
//        val = _val;
//        next = NULL;
//        random = NULL;
//    }
//};


class Solution {
public:
    unordered_map<Node*,Node*>m;
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;
        Node*ans=new Node(head->val),*p=ans,*h=head->next;
        m[head]=p;
        while (h){
            p->next=new Node(h->val);
            p=p->next;
            m[h]=p;
            h=h->next;
        }
        h=head;p=ans;
        while (h){
            p->random=m[h->random];
            p=p->next;h=h->next;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}