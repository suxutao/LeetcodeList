#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[1000005]={};
    vector<int>v;
    vector<int> closestPrimes(int left, int right) {
        int MAX=INT_MAX,pos=-1;
        for (int i = 2; i <= right; ++i) {
            if (arr[i])
                continue;
            if (i>=left)
                v.push_back(i);
            for (int j = 1; j*i <= right; ++j) {
                arr[j*i]=1;
            }
        }
        if (v.size()<2)
            return {-1,-1};
        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i+1]-v[i]<MAX){
                MAX=v[i+1]-v[i];
                pos=i;
            }
        }
        return {v[pos],v[pos+1]};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}