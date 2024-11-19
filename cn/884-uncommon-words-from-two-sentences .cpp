#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>m1,m2;
        vector<string>v;
        stringstream ss1(s1),ss2(s2);
        string temp;
        while (getline(ss1,temp,' ')){
            m1[temp]++;
        }
        while (getline(ss2,temp,' ')){
            m2[temp]++;
        }
        for (auto &[a,b]: m1){
            if (b==1&&m2[a]==0)
                v.push_back(a);
        }
        for (auto &[a,b]: m2){
            if (b==1&&m1[a]==0)
                v.push_back(a);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}