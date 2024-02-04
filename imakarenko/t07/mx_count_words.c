int mx_count_words(const char *str, char delimiter){
    int flag = 0;
    int count = 0;
    while (*str){
        if (*str == delimiter)
            flag = 0; 
        else if (flag == 0){
            count++;
            flag = 1; 
        }
        str++;
    }
    return count;
}