#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::sort;
using std::set;
using std::cout;
using std::endl;
using std::vector;

int len(vector<int> s){
    int counter = 1;
    int maxlen = 1;
    for(int i = 1; i <= s.size(); i++){
        if(s[i] >= s[i-1]){
            counter++;
        }
        else {
            if(maxlen < counter){
                maxlen = counter;
            }
            counter = 1;
        }
    }
    return maxlen;
}

int main(){
    vector<int> v = {1, 4, 7, 8, 9, 2, 5, 3, 1, 5, 6, 8, 10, 13, 22 };
    cout << len(v) << endl;
}