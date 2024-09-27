#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

string chess(int k, int l, int nl){
    if(k==l){
        return "illegal state";
    }
    if(k==nl){
        return "illegal move";
    }
    if(k<8){
        if(l<8){
            return "illegal state";
        }
        if(nl<8){
            return "illegal move";
        }
    }
    if(k>55){
        if(l>55){
            return "illegal state";
        }
        if(nl>55){
            return "illegal move";
        }
    }
    while(l%8!=7){
        l = l+1;
        if(k==l){
            return "illegal state";
        }
        if(nl==l){
            return "continue";
        }
    }
    while(l%8!=0){
        l = l-1;
        if(k==l){
            return "illegal state";
        }
        if(nl==l){
            return "continue";
        }
    }  
    if(l%8==7){
        if(k%8==7){
            return "illegal state";
        }
        if(nl%8==7){
            return "cont";
        }
    }
    if(l%8==0){
        if(k%8==0){
            return "illegal state";
        }
        if(nl%8==0){
            return "cont";
        }
    }
    while (l < 64){
        l = l + 8;
        if (k == l){
            return "illegal state";
        }
        if(nl==l){
            return "cont";
        }
    }
    while (l > 0){
        l = l - 8;
        if (k == l){
            return "illegal state";
        }
        if(nl==l){
            return "cont";
        }
    }
    while(l<63){
        l = l+7;
        if(nl == l){
            return "move not allowed";
        }
    }
    while(l<63){
        l = l+9;
        if(nl == l){
            return "move not allowed";
        }
    }
    while(l>0){
        l = l-7;
        if(nl == l){
            return "move not allowed";
        }
    }
    while(l>0){
        l = l-9;
        if(nl == l){
            return "move not allowed";
        }
    }
    if(k==0){
        if((nl==9)){
            return "stop";
        }
    }
    if(k==7){
        if((nl==14)){
            return "stop";
        }
    }
    if(k==56){
        if((nl==49)){
            return "stop";
        }
    }
    if(k==63){
        if((nl==54)){
            return "stop";
        }
    }
}




int main(){
    cout << chess(34, 53, 37) << endl;
}