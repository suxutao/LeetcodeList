#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyStack {
public:
    queue<int>q;
    int size;
    MyStack() {
        this->size=0;
    }
    
    void push(int x) {
        q.push(x);
        size++;
    }
    
    int pop() {
        for (int i = 0; i < q.size() - 1; ++i) {
            int a=q.front();
            q.pop();
            q.push(a);
        }
        int a=q.front();
        q.pop();size--;
        return a;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        if (size==0)
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}