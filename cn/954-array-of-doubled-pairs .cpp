#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n=arr.size();
        multiset<int>s(arr.begin(),arr.end());
        if (s.count(0)&1)
            return false;
        s.erase(0);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; ++i) {
            if (arr[i]<0){
                if (s.contains(arr[i])){
                    if (arr[i]&1)
                        return false;
                    if (s.contains(arr[i]/2)){
                        s.extract(arr[i]);
                        s.extract(arr[i]/2);
                    }else{
                        return false;
                    }
                }
            }else{
                break;
            }
        }
        for (int i = n-1; i >= 0; --i) {
            if (arr[i]>0){
                if (s.contains(arr[i])){
                    if (arr[i]&1)
                        return false;
                    if (s.contains(arr[i]/2)){
                        s.extract(arr[i]);
                        s.extract(arr[i]/2);
                    }else{
                        return false;
                    }
                }
            }else{
                break;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}