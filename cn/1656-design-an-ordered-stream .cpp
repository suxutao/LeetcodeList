#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class OrderedStream {
public:
    int ptr,N;
    vector<string>v;
    OrderedStream(int n) {
        ptr=1;N=n;
        v.resize(n+1);
    }
    
    vector<string> insert(int idKey, string value) {
        v[idKey]=value;
        vector<string>vs;
        while (ptr<=N&&v[ptr]!=""){
            vs.push_back(v[ptr++]);
        }
        return vs;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}