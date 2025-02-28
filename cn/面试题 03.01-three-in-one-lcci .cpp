#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TripleInOne {
public:
    int p[3]{},sz;
    vector<int>v;
    TripleInOne(int stackSize) {
        sz=stackSize;
        v.resize(sz*3+1);
        p[1]=sz;
        p[2]=sz*2;
    }
    
    void push(int stackNum, int value) {
        if (p[stackNum]<(stackNum+1)*sz){
            v[p[stackNum]++]=value;
        }
    }
    
    int pop(int stackNum) {
        if (isEmpty(stackNum))
            return -1;
        return v[--p[stackNum]];
    }
    
    int peek(int stackNum) {
        if (isEmpty(stackNum))
            return -1;
        return v[p[stackNum]-1];
    }
    
    bool isEmpty(int stackNum) {
        return p[stackNum]==stackNum*sz;
    }
};

/**
 * Your TripleInOne object will be instantiated and called as such:
 * TripleInOne* obj = new TripleInOne(stackSize);
 * obj->push(stackNum,value);
 * int param_2 = obj->pop(stackNum);
 * int param_3 = obj->peek(stackNum);
 * bool param_4 = obj->isEmpty(stackNum);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}