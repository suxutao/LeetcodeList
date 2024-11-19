#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SortedStack {
public:
    stack<int>s,MIN;
    SortedStack() {

    }
    
    void push(int val) {
        while (!MIN.empty()&&MIN.top()<val){
            s.push(MIN.top());
            MIN.pop();
        }
        MIN.push(val);
        while (!s.empty()){
            MIN.push(s.top());
            s.pop();
        }
    }
    
    void pop() {
        if (!MIN.empty())
            MIN.pop();
    }
    
    int peek() {
        if (MIN.empty())
            return -1;
        return MIN.top();
    }
    
    bool isEmpty() {
        return MIN.empty();
    }
};

/**
 * Your SortedStack object will be instantiated and called as such:
 * SortedStack* obj = new SortedStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->isEmpty();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}