#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyHashMap {
public:
    int arr[1000002];
    MyHashMap() {
        memset(arr,-1,sizeof arr);
    }
    
    void put(int key, int value) {
        arr[key]=value;
    }
    
    int get(int key) {
        return arr[key];
    }
    
    void remove(int key) {
        arr[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}