#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCircularQueue {
public:
    vector<int>v;
    int head=0,tail=0,n;
    MyCircularQueue(int k) {
        v.resize(k+1);
        n=k+1;
    }
    
    bool enQueue(int value) {
        if (isFull())
            return false;
        v[head]=value;
        head=(head+1)%n;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
            return false;
        tail=(tail+1)%n;
        return true;
    }
    
    int Front() {
        if (isEmpty())
            return -1;
        return v[tail];
    }
    
    int Rear() {
        if (isEmpty())
            return -1;
        return v[(head-1+n)%n];
    }
    
    bool isEmpty() {
        return tail==head;
    }
    
    bool isFull() {
        return (head+1)%n==tail;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}