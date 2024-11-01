#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    long long int b;
    cin >> b;
    if(b%2==0){
        cout << 5+(6*((b/2)-1)) << endl;
    }
    if((b%2==1)){
        cout << 1+(6*(b/2)) << endl;
    }
}