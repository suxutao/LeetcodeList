#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class RandomizedCollection {
public:
    vector<int>v;
    unordered_map<int,vector<int>>m;
    RandomizedCollection() {

    }

    bool insert(int val) {
        bool fan=m[val].empty();
        v.push_back(val);
        m[val].push_back(v.size()-1);
        return fan;
    }

    bool remove(int val) {
        if (!m.contains(val)||m[val].empty())
            return false;
        v[m[val].back()]=v.back();
        m[v.back()].back()=m[val].back();
        sort(m[v.back()].begin(), m[v.back()].end());
        v.pop_back();
        m[val].pop_back();
        return true;
    }

    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}