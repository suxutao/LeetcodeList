#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if (p1==p2||p1==p3||p1==p4||p2==p3||p2==p4||p3==p4)
            return false;
        unordered_map<int,int>m;
        ++m[(p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1])];
        ++m[(p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1])];
        ++m[(p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1])];
        ++m[(p2[0]-p3[0])*(p2[0]-p3[0])+(p2[1]-p3[1])*(p2[1]-p3[1])];
        ++m[(p2[0]-p4[0])*(p2[0]-p4[0])+(p2[1]-p4[1])*(p2[1]-p4[1])];
        ++m[(p3[0]-p4[0])*(p3[0]-p4[0])+(p3[1]-p4[1])*(p3[1]-p4[1])];
        bool c= true;
        for (auto &[_,a]: m)
            if (a==4)
                c=false;
        if (c||m.size()!=2) return false;
        p2[0]-=p1[0];p2[1]-=p1[1];
        p3[0]-=p1[0];p3[1]-=p1[1];
        p4[0]-=p1[0];p4[1]-=p1[1];
        return p2[0]*p3[0]+p2[1]*p3[1]==0||p2[0]*p4[0]+p2[1]*p4[1]==0||p4[0]*p3[0]+p4[1]*p3[1]==0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}