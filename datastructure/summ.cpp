#include <iostream>
#include <unordered_set>
#include <vector>

using std::unordered_set;
using std::cout;
using std::endl;
using std::vector;

bool summ(vector<int> vec, int v){
    unordered_set<int> s;
    for(int i:vec){
        if(s.count(i)>=1){
            return 1;
        }
        s.insert(i);
    }
    return 0;
}

int main(){
    vector<int> vec = {1, 6, 3};
    int v = 4;
    cout << summ(vec, v) << endl;
}