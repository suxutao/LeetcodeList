#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyHashSet {
public:
    map<int,bool>m;
    MyHashSet() {

    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
        m[key]=0;
    }
    
    bool contains(int key) {
        return m[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}