#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<int>v;int i;
        unordered_map<int,int>m;
        for (auto &item: arr){
            m[item]++;
        }
        for (auto &item: m){
            v.push_back(item.second);
        }
        sort(v.begin(), v.end(),greater<>());
        for (i = v.size()-1; i >= 0; --i) {
            if (k>=v[i]){
                k-=v[i];
            }else{
                break;
            }
        }
        return i+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}