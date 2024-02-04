char *mx_strchr(const char *s, int c){
    while(*s || *s == (char)c){
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    return 0;
}
