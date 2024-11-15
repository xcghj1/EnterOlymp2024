#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 


using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::reverse;

// string reverse(string a, int b, int e){
//     string arev;
//     string res;
//     int rb;
//     int re;
//     int asz = a.size()-1;
//     for(int i = a.size()-1; i >= 0; i--){
//         if(a.size()-1-i<e){
//             arev.push_back(a[a.size()-i-1]);
//         }
//         if(i==e){
//             arev.push_back(a[i]);
//         }
//         if(b < a.size()-1-i < e){
//             arev.push_back(a[i]);
//         }
//         if(i == b){
//             arev.push_back(a[a.size()-1-i]);
//         }
//         if(a.size()-1-i>e){
//             arev.push_back(a[a.size()-1-i]);
//         }
//     }
//     return arev;
// }

string reversestr(string a, int b, int e){
    string arev;
    string res;
    string hres;
    int re;
    for(int i = 0; i < a.size(); i++){
        if(i<b){
            arev.push_back(a[i]);
        }
        if(i == b){
            re = i;
        }
        if(b <= i < e){
            res.push_back(a[i]);
        }
        if(i == e){
            auto res_begin = res.begin();
            auto res_end = res.end();
            hres = reverse(res_begin, res_end);
            arev.push_back(hres);
            arev.push_back(a[re]);
        }
        if(i>e){
            arev.push_back(a[i]);
        }
    }
    return arev;
}

int main(){
    string a = "ASDFSA";
    int b = 1;
    int e = 4;
    cout << reversestr(a, b, e) << endl;
}