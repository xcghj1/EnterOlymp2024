#include <iostream>
#include <unordered_set>
#include <vector>

using std::unordered_set;
using std::cout;
using std::endl;
using std::vector;

bool pair(vector<int> v){
    unordered_set<int> p;
    for(int i: v){
        if(p.count(i)==0){
            p.insert(i);
        }
        if(p.count(i)!=0){
            return 1;
        }
    }
    return 0;
}

int main(){
    vector<int> v = {2, 1, 6};
    cout << pair(v) << endl;
}