#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>m;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if (m.contains(val))
            return false;
        v.push_back(val);
        m[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if (!m.contains(val))
            return false;
        v[m[val]]=v.back();
        m[v.back()]=m[val];
        v.pop_back();
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}