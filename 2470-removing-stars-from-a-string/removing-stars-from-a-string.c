char* removeStars(char* s) {
    int len = strlen(s);
    char* result=(char*)malloc((len+1)*sizeof(char));
    int j=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='*')
        {
            if(j>0)
                j--;
        }
        else
        {
            result[j]=s[i];
            j++;
        }
    }
    result[j]='\0';
    return result;
}