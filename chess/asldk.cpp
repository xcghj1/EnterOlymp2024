for(int i = l; i < 63; i=i+8){
        if(l%8==7){

        }
    }
    if(l%8==7){
        for(int i = l; i < 63; i=i+8){
            
        }
    }
    for(int i = 1; i < 8; i++){
        if(l+i==k){
            return "illegal state";
        }
        if(l-i==k){
            return "illegal state";
        }
    }
    for(int i = 0; i < 63; i=i+8){
        if(l+i==k){
            return "illegal state";
        }
        if(l-i==k){
            return "illegal state";
        }
    }
    for(int i = 0; i<63; i= i+9){
        if(l+i==nl){
            return "move not allowed";
        }
        if(l-i==nl){
            return "move not allowed";
        }
    }
    for(int i = 0; i<63; i= i+7){
        if(l+i==nl){
            return "move not allowed";
        }
        if(l-i==nl){
            return "move not allowed";
        }
    }