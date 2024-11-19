#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CQueue {
public:
    queue<int>q;
    CQueue() {

    }
    
    void appendTail(int value) {
        q.push(value);
    }
    
    int deleteHead() {
        if (q.empty())
            return -1;
        int t=q.front();
        q.pop();
        return t;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}