// Last updated: 3/30/2026, 2:13:10 PM
int firstUniqChar(char* s) {
    int c[26] = {0};
    for(int i = 0 ; i < strlen(s) ; i++){
        c[s[i]-'a']++;
    }
    for(int i = 0 ; i < strlen(s) ; i++){
        if(c[s[i]-'a']==1){
            char *e = strchr(s,s[i]);
            return (int)(e - s);
        }
    }
    return -1;
}