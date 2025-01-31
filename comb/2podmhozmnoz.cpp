#include <iostream>
#include <vector>


using std::vector;
using std::cin;
using std::cout;
using std::endl;


bool add(vector<int>& s, int n){
    int counter = 0;
    bool f = 1;
    bool of = 0;
    while(f==1){
        if(s[counter]+1<=n){
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


void printserofser(int k, int n){
    vector<int> ser;
    vector<int> b;
    vector<int> pod;
    for(int i = 0; i < k; i++){
        ser.push_back(1);
        b.push_back(1);
    }
    while(add(ser, n)==1){
        for(int i = 0; i < n; i++){
            if(b[i]==1){
                pod.push_back(ser[i]);
            }
            if(i==n-1){

            }
        }
        printvec(pod);
        cout << " " << endl;
    }
}



int main(){
    int n = 3;
    int k = 3;
    printserofser(n, k);
}