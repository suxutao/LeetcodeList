#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCircularDeque {
public:
    vector<int>v;
    int head=0,tail=0,n;
    MyCircularDeque(int k) {
        v.resize(k+1);
        n=k+1;
    }
    
    bool insertFront(int value) {
        if (isFull())
            return false;
        head=(head-1+n)%n;
        v[head]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull())
            return false;
        v[tail]=value;
        tail=(tail+1)%n;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty())
            return false;
        head=(head+1)%n;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty())
            return false;
        tail=(tail-1+n)%n;
        return true;
    }
    
    int getFront() {
        if (isEmpty())
            return -1;
        return v[head];
    }
    
    int getRear() {
        if (isEmpty())
            return -1;
        return v[(tail-1+n)%n];
    }
    
    bool isEmpty() {
        return head==tail;
    }
    
    bool isFull() {
        return (tail+1)%n==head;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}