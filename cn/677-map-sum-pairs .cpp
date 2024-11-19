#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MapSum {
public:
    map<string,int>m;
    MapSum() {

    }
    
    void insert(string key, int val) {
        m[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for (auto &i: m){
            if (i.first.size()>=prefix.size()&&i.first.substr(0,prefix.size())==prefix)
                ans+=i.second;
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}