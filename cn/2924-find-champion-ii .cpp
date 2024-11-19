#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[103]={};
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>v;
        for (auto &item: edges){
            arr[item[1]]=1;
        }
        for (int i = 0; i < n; ++i) {
            if (arr[i]==0)
                v.push_back(i);
            if (v.size()>1)
                return -1;
        }
        return v[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}