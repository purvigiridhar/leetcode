int strStr(char* haystack, char* needle) {
    int h_len=strlen(haystack);
    int n_len=strlen(needle);
    if(n_len>h_len) 
        return -1;
    for(int i=0;i<=h_len-n_len;i++)
    {
        int j=0;
        while(j<n_len && haystack[i+j]==needle[j])
            j++;
        if(j==n_len)
            return i;    
    }
    return -1;
}