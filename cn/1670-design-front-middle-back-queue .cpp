#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FrontMiddleBackQueue {
public:
    deque<int>d;
    FrontMiddleBackQueue() {

    }
    
    void pushFront(int val) {
        d.push_front(val);
    }
    
    void pushMiddle(int val) {
        d.insert(d.begin()+d.size()/2,val);
    }
    
    void pushBack(int val) {
        d.push_back(val);
    }
    
    int popFront() {
        if (d.empty())
            return -1;
        int a=d.front();
        d.pop_front();
        return a;
    }
    
    int popMiddle() {
        if (d.empty())
            return -1;
        int a=d[(d.size()-1)/2];
        d.erase(d.begin()+(d.size()-1)/2);
        return a;
    }
    
    int popBack() {
        if (d.empty())
            return -1;
        int a=d.back();
        d.pop_back();
        return a;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}