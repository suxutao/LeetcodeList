#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TopVotedCandidate {
public:
    unordered_map<int,int>m;
    int p[5005]{},MAX=0,pos;
    vector<int>ti;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        ti=times;
        int n=persons.size();
        for (int i = 0; i < n; ++i) {
            p[persons[i]]++;
            if (p[persons[i]]>=MAX){
                MAX=p[persons[i]];
                pos=persons[i];
            }
            m[times[i]]=pos;
        }
    }
    
    int q(int t) {
        auto po=lower_bound(ti.rbegin(), ti.rend(),t,greater<>());
        if (po==ti.rend())
            return pos;
        else
            return m[*po];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}