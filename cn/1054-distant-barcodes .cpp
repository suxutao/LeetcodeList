#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    priority_queue<pair<int,int>>q;
    unordered_map<int,int>m;
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n=barcodes.size();
        pair<int,int> a,b;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            m[barcodes[i]]++;
        }
        for (auto &[a,b]: m){
            q.push({b,a});
        }
        for (int i = 0; i < n; i+=2) {
            a=q.top();q.pop();
            if (!q.empty()){
                b=q.top();q.pop();
                if (i>1&&a.second==v[i-1])
                    swap(a,b);
                v[i]=a.second;
                v[i+1]=b.second;
                a.first--;b.first--;
                if (a.first)
                    q.push(a);
                if (b.first)
                    q.push(b);
            }else{
                v[i]=a.second;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}