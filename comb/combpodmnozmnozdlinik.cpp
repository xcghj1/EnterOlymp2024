#include <iostream>
#include <vector>
#include <bitset>


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

int getones(unsigned long int n){
    int count = 0;
    while(n>0){
        n = n & (n-1);
        count++;
    }
    return count;
}


unsigned long int firstone(unsigned long int n){
    unsigned long int mask = 1;
    while((1&n)==0){
        mask <<= 1;
        n >>= 1;
    }
    return mask;
}


unsigned long int next_bin(unsigned long int n){
    int edinic = getones(n);
    unsigned long int added_n = n + firstone(n);
    int len_added_n = getones(added_n);
    int remainedones = edinic - len_added_n;
    unsigned long int digit = 1;
    while(remainedones > 0){
        if(added_n | digit != added_n){
            remainedones--;
            added_n |= digit;
        }
        digit = digit << 1;
    }
    return added_n;
}



int main(){
    unsigned long int n = 1+2+4+8;
    int k = 10;
    std::bitset<k> binary(n);
    cout << binary << endl;
    n = next_bin(n);
} 