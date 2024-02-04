char *mx_strncpy(char *dst, const char* src, int len)
{
    char *n = dst;
    for (int i = 0; i < len && *src; i++) {
        *dst= *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return n;
}
