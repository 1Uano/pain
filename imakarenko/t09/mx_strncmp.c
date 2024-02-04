int mx_strcmp(const char *s1, const char *s2, int n){
    int i = 0;
    while ((*s1 != '\0' || *s2 != '\0') && i < n){
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
        i++;
    }
    return 0;
}

int main(void){
    char s1[] = "dfghjfkdkf sdkflkdfm";
    char s2[] = "dfghjfkdkf sdkflkdfm";
    mx_strcmp(s1, s2, 6);
}
