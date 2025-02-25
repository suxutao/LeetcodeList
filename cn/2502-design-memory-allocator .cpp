#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Allocator {
public:
    vector<int>v;
    unordered_map<int,vector<pair<int,int>>>m;
    Allocator(int n) {
        v.resize(n);
    }
    
    int allocate(int size, int mID) {
        int cnt=0,pos=-1;
        for (int i = 0; i < v.size(); ++i) {
            if (!v[i]){
                cnt++;
                if (cnt==size){
                    pos=i-size+1;
                    break;
                }
            }else{
                cnt=0;
            }
        }
        if (pos==-1)
            return -1;
        for (int i = pos; i < size+pos; ++i) {
            v[i]=mID;
        }
        m[mID].push_back({pos,size});
        return pos;
    }
    
    int freeMemory(int mID) {
        int ans=0;
        for (auto &[a,b]: m[mID]){
            ans+=b;
            for (int i = a; i < a + b; ++i) {
                v[i]=0;
            }
        }
        m.erase(mID);
        return ans;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}