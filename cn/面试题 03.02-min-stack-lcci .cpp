#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s;
    stack<int>MIN;
    MinStack() {

    }
    
    void push(int x) {
        s.push(x);
        if (MIN.empty())
            MIN.push(x);
        else
            MIN.push(min(MIN.top(),x));
    }
    
    void pop() {
        s.pop();
        MIN.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return MIN.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}