#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Checkout {
public:
    deque<pair<int,int>>d;
    unordered_map<int,int>m;
    int head=0,tail=0;
    Checkout() {

    }
    
    int get_max() {
        if (head==tail)
            return -1;
        return d.front().first;
    }
    
    void add(int value) {
        while (!d.empty()&&d.back().first<=value){
            d.pop_back();
        }
        d.push_back({value,tail});
        m[tail++]=value;
    }
    
    int remove() {
        if (head==tail)
            return -1;
        if (d.front().second==head)
            d.pop_front();
        return m[head++];
    }
};

/**
 * Your Checkout object will be instantiated and called as such:
 * Checkout* obj = new Checkout();
 * int param_1 = obj->get_max();
 * obj->add(value);
 * int param_3 = obj->remove();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}