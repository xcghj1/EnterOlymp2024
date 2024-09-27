#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::endl;


vector<int> troyki(){
    vector<int> t;
    int count = 0;
    for(int i = 111; i <= 611; i++){
        int s = i/100;
        int e = i%10; 
        int d = (i - s * 100)/10;
        if(s+e+d < 9){
            t.push_back(i);
        }
    }
    return t;
}

int printvec(vector<int> v){
    for(int i:v){
        cout << i << ", "; 
    }
    cout << endl;
}


vector<int> twenty(vector<int> v){
    map<int, vector<int>> troyheig;
    vector<int> znach;
    for(int i = 0; i < v.size(); i++){
        int d = v[i]%100;
    }
}

int twenfig(vector<int> v){
    for(int i:v){
        for(int j:v){
            for(int h = 11; h<=61; h++){
                int di = (i-i/100*100)/10;
                int ei = i%10;
                int sj = j/100;
                int dj = (j-j/100*100)/10;
                int dh = h/10;
                int eh = h%10;
                
            }
        }
    }
}

int main(){
    printvec(troyki());
}