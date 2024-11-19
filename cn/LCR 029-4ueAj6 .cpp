#include "../../../stdc.h"
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
//leetcode submit region begin(Prohibit modification and deletion)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        if (!head) {
            head=new Node(insertVal);
            head->next=head;
            return head;
        }
        if (head->next==head){
            head->next=new Node(insertVal);
            head->next->next=head;
            return head;
        }
        int MAX=INT_MIN,MIN=INT_MAX;
        Node*t=head,*pre=head,*p=head->next;
        do {
            MAX= max(MAX,t->val);
            MIN= min(MIN,t->val);
            t=t->next;
        } while (t!=head);
        if (MIN==MAX){
            pre=t->next;
            t->next=new Node(insertVal);
            t->next->next=pre;
            return head;
        }
        if (MAX<=insertVal){
            while (t->val!=MAX){
                t=t->next;
            }
            while (t->val==MAX&&t->next->val==MAX){
                t=t->next;
            }
            p=t->next;
            t->next=new Node(insertVal);
            t->next->next=p;
        }else if (MIN>=insertVal){
            while (t->val==MIN)
                t=t->next;
            while (t->val!=MIN){
                pre=t;
                t=t->next;
            }
            pre->next=new Node(insertVal);
            pre->next->next=t;
        }else{
            while (!(pre->val<=insertVal&&p->val>=insertVal)){
                pre=p;
                p=p->next;
            }
            pre->next=new Node(insertVal);
            pre->next->next=p;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}