int mx_sqrt(int x){
    if (x<=0)
        return 0;
    for (int i = 1; i*i<=x; i++){
        if (x == i*i){
            return i;
        }
    }
    return 0;
}

