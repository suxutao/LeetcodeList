#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Skiplist {
public:
    int arr[20005]{};
    Skiplist() {
        
    }
    
    bool search(int target) {
        return arr[target];
    }
    
    void add(int num) {
        arr[num]++;
    }
    
    bool erase(int num) {
        if (arr[num]){
            --arr[num];
            return true;
        }
        return false;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}