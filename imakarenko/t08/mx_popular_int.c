int mx_popular_int(const int *arr, int size){
    int common = arr[0];
    int count = 1;
    for (int i = 0; i < size; i++){
        int temp = 0;
        for (int j = 0; j <size; j++){
            if (arr[i]==arr[j])
                temp++;
        }
        if (temp > count){
            common = arr[i];
            count = temp;
        }
    }
    return common;
}