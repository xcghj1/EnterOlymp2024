#include <iostream>
#include <set>
#include <vector>
#include <algorithm>


using std::sort;
using std::set;
using std::cout;
using std::endl;
using std::vector;

vector<int> mysort(vector<int> s, int a, int b){
    sort(s.begin(), s.end());
    vector<int> s_sort;
    auto r = std::upper_bound(s.begin(), s.end(), b);
    auto l = std::lower_bound(s.begin(), s.end(), a);
    return vector<int> (l, r);
}


int printvec(vector<int> s){
    for(int i:s){
        cout << i << ", ";
    }
    cout << endl;
}


int main(){
    vector<int> s = {2, 3, 19, 5, 12, 5, 2, 24};
    int a = 4;
    int b = 15;
    cout << printvec(mysort(s, a, b)) << endl;
}