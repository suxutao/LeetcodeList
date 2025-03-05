#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyLinkedList {
private:
    struct Node{
        Node*pre,*next;
        int value;
        Node(){}
        Node(int val):value(val){}
    };
    int length=0;
    Node*head;
public:
    MyLinkedList() {
        head=new MyLinkedList::Node();
        head->next=head;
        head->pre=head;
    }
    
    int get(int index) {
        if (index>=length)
            return -1;
        Node*p=head->next;
        for (int i = 0; i < index; ++i) {
            p=p->next;
        }
        return p->value;
    }
    
    void addAtHead(int val) {
        length++;
        Node*temp=head->next,*p=new MyLinkedList::Node(val);
        head->next=p;
        p->next=temp;
        p->next->pre=p;
        p->pre=head;
    }
    
    void addAtTail(int val) {
        length++;
        Node*temp=head->pre,*p=new MyLinkedList::Node(val);
        head->pre=p;
        p->pre=temp;
        p->pre->next=p;
        p->next=head;
    }
    
    void addAtIndex(int index, int val) {
        if (index>length)
            return;
        if (index==length){
            addAtTail(val);
            return;
        }
        length++;
        Node*p=head->next,*pre=head;
        for (int i = 0; i < index; ++i) {
            pre=p;
            p=p->next;
        }
        Node*pn=new MyLinkedList::Node(val);
        pre->next=pn;
        p->pre=pn;
        pn->next=p;
        pn->pre=pre;
    }
    
    void deleteAtIndex(int index) {
        if (index>=length)
            return;
        length--;
        Node*p=head->next,*pre=head;
        for (int i = 0; i < index; ++i) {
            pre=p;
            p=p->next;
        }
        pre->next=p->next;
        pre->next->pre=pre;
        delete p;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}