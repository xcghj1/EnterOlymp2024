#include <iostream>
#include <vector>


using std::swap;
using std::vector;
using std::cin;
using std::cout;
using std::endl;


bool add(vector<int>& s, int n){
    int counter = 0;
    bool f = 1;
    bool of = 0;
    while(f==1){
        if(s[counter]+1<=counter+1){
            s[counter]++;
            f = 0;
            if(of == 1){
                for(int i = 0; i < counter; i++){
                    s[i] = 1;
            of = 0;
                }
            }
        }
        else{
            of = 1;
            counter++;
            if(counter>=s.size()){
                return 0;
            }
        }
    }    
    return 1;
}


void printvec(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}



void peretas(vector<int> p, int n){
    vector<int> ser;
    vector<int> vp;
    for(int i = 1; i <=n; i++){
        ser.push_back(1);
        vp.push_back(i);
    }
    printvec(vp);
    while(add(ser, n)==1){
        for(int i = n-1; i>=0; i--){
            if(vp[i]!=ser[i]){
                swap(vp[i], vp[ser[i]-1]);
            }
        }
        printvec(vp); 

    }
}


int main(){
    int n =4;
    vector<int> p = {1, 2, 3, 4, 5};
    peretas(p, n);
} 