#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    vector<int>v;
    map<int,int>m;
    int query(int a,vector<int>& nextVisit){
        return a==nextVisit[a]?a:nextVisit[a]= query(nextVisit[a],nextVisit);
    }
    int firstDayBeenInAllRooms(vector<int>& nextVisit) {
        int n=nextVisit.size();
        v.resize(n);
        for (int i = 0; i < n-1; ++i) {
            if (i==nextVisit[i]){
                v[i+1]=(2+v[i])%N;
            }else if (nextVisit[i]==0){
                v[i+1]=(2*v[i]+2)%N;
            }else{
                v[i+1]=(2*v[i]%N-v[nextVisit[i]]+2+N)%N;
            }
        }
        return v[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}