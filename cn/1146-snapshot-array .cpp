#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SnapshotArray {
public:
    int kuai=-1;
    vector<vector<pair<int,int>>>v;
    SnapshotArray(int length) {
        v.assign(length,{{0,-1}});
    }
    
    void set(int index, int val) {
        if (kuai==v[index].back().second)
            v[index].back().first=val;
        else
            v[index].emplace_back(val,kuai);
    }
    
    int snap() {
        return ++kuai;
    }
    
    int get(int index, int snap_id) {
        for (int i = v[index].size()-1; i >= 0; --i) {
            if (v[index][i].second<snap_id)
                return v[index][i].first;
        }
        return 0;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}