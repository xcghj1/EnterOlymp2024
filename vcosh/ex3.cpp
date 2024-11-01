#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::list;

int main(){
    list<int> v;
    long long int l;
    cin >> l;
    int prom;
    int m;
    int maxn = 0;
    int maxl = 0;
    for(int i = 1; i <= l; i++){
        cin >> m;
        v.push_back(m);
        auto vbegin = v.begin();
        auto vend = --v.end();
        if(i==3){
            prom = *vbegin;
            prom += 2**--vend;
            prom += *--vend;
            maxn += prom;
            maxl = i/2;
            v.pop_front();
            prom = 0;
        }
        if((i%2==1)&&(i>3)){
            prom = *vbegin;
            prom += *--vend;
            prom += 2**--vend;
            prom += *--vend; 
            if(*vbegin%2==0){
                if(maxn < prom){
                maxl = i/2;
                maxn = prom;       
                }
            }
            if(*vbegin%2==1){
                if(maxn < prom){
                maxl = i/2+1;
                maxn = prom;
                }
            }
            v.pop_front();
            prom = 0;
        }
    }
    cout << maxn << ", " << maxl << endl;
}
