#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v1,v2;
    int compareVersion(string version1, string version2) {
        stringstream s1(version1),s2(version2);
        string temp;
        while (getline(s1,temp,'.')){
            v1.push_back(stoi(temp));
        }while (getline(s2,temp,'.')){
            v2.push_back(stoi(temp));
        }
        for (int i = 0; i < min(v1.size(), v2.size()); ++i) {
            if (v1[i]>v2[i])
                return 1;
            else if (v1[i]<v2[i])
                return -1;
        }
        if (v2.size()>v1.size()){
            for (int i = v1.size(); i < v2.size(); ++i) {
                if (v2[i])
                    return -1;
            }
        }else{
            for (int i = v2.size(); i < v1.size(); ++i) {
                if (v1[i])
                    return 1;
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}