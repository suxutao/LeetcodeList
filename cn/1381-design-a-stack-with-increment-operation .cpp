#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CustomStack {
public:
    vector<int>v;
    int MAX;
    CustomStack(int maxSize) {
        MAX=maxSize;
    }
    
    void push(int x) {
        if (v.size()<MAX)
            v.push_back(x);
    }
    
    int pop() {
        if (v.empty())
            return -1;
        int a=v.back();
        v.pop_back();
        return a;
    }
    
    void increment(int k, int val) {
        for (int i = 0; i < min(k, (int)v.size()); ++i) {
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}