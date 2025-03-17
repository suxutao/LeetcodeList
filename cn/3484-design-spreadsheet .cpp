#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Spreadsheet {
public:
    vector<vector<int>>v;
    Spreadsheet(int rows) {
        v.assign(26,vector<int>(rows+1));
    }
    
    void setCell(string cell, int value) {
        int col=cell[0]-'A',row=stoi(cell.substr(1));
        v[col][row]=value;
    }
    
    void resetCell(string cell) {
        int col=cell[0]-'A',row=stoi(cell.substr(1));
        v[col][row]=0;
    }
    
    int getValue(string formula) {
        int ans=0;
        string cell;
        stringstream ss(formula.substr(1));
        while (getline(ss,cell,'+')){
            if (isupper(cell[0])){
                int col=cell[0]-'A',row=stoi(cell.substr(1));
                ans+=v[col][row];
            }else{
                ans+=stoi(cell);
            }
        }
        return ans;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}