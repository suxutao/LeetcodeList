#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
struct Node{
    int key,value;
    Node* pre,*next;
    Node(){}
    Node(int k,int v):key(k),value(v){}
};
class LRUCache {
    int capacity;
    Node*dum;
    unordered_map<int,Node*>key_to_node;

    void remove(Node*p){
        p->pre->next=p->next;
        p->next->pre=p->pre;
    }

    void push_front(Node*p){
        p->pre=dum;
        p->next=dum->next;
        dum->next=p;
        p->next->pre=p;
    }

    Node* get_node(int key){
        if (!key_to_node.contains(key)){
            return nullptr;
        }
        Node*node=key_to_node[key];
        remove(node);
        push_front(node);
        return node;
    }
public:

    LRUCache(int capacity) {
        this->capacity=capacity;
        dum=new Node();
        dum->pre=dum;
        dum->next=dum;
    }

    int get(int key) {
        Node*node= get_node(key);
        return node?node->value:-1;
    }

    void put(int key, int value) {
        Node* node= get_node(key);
        if (node){
            node->value=value;
            return;
        }
        key_to_node[key]=node=new Node(key,value);
        push_front(node);

        if (key_to_node.size()>capacity){
            Node*back=dum->pre;
            key_to_node.erase(back->key);
            remove(back);
            delete back;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}