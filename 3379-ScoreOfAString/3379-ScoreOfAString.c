// Last updated: 3/30/2026, 2:11:26 PM
int scoreOfString(char* s) {
    int score = 0;
    for(int i = 0 ; *(s+1)!='\0' ; i++)
    {
        score+=abs(*s - *(s+1));
        s++;
    }
    return score;
}