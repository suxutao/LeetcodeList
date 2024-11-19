#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s1;
    stack<int>s2;
    int MIN;
    MinStack() {
        MIN=INT_MAX;
        s2.push(MIN);
    }

    void push(int val) {
        MIN= min(s2.top(),val);
        s1.push(val);
        s2.push(MIN);
    }

    void pop() {
        s1.pop();s2.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
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