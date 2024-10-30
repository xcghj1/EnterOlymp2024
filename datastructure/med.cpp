#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::sort;
using std::set;
using std::cout;
using std::endl;
using std::vector;

int med(vector<int> v){
    sort(v.begin(), v.end());
    int i = (v.size()-1)/2;
    return v[i];
}

int main(){
    vector<int> v = {3, 6, 1, 7, 4, 8, 9};
    cout << med(v) << endl;
}