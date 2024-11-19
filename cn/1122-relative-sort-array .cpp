#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>m;
        for (int i = 0; i < arr2.size(); ++i) {
            m[arr2[i]]=i;
        }
        vector<int>v,t;
        for (int i = 0; i < arr1.size(); ++i) {
            if (m.contains(arr1[i])){
                t.push_back(arr1[i]);
            }else{
                v.push_back(arr1[i]);
            }
        }
        sort(t.begin(), t.end(),[&](int&a,int&b){
            return m[a]<m[b];
        });
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            t.push_back(v[i]);
        }
        return t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}