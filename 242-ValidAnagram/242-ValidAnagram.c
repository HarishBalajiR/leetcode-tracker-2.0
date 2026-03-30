// Last updated: 3/30/2026, 2:13:32 PM
bool isAnagram(char* s, char* t) {
    int freq[256] = {0};
    for(int i = 0 ; i < strlen(s) ; i++){
        freq[s[i]]++;
    }
    for(int i = 0 ; i < strlen(t) ; i++){
        freq[t[i]]--;
    }
    for(int i = 0 ; i < 127 ; i++){
        if(freq[i]!=0) return false;
    }
    return true;
}