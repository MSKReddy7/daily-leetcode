char findTheDifference(char* s, char* t) {
    char res=0;
    int i=0,j=0;
    for(; s[i] && t[j]; i++,j++){
        res ^= s[i];
        res ^= t[j];
    }
    return res ^ t[j];
}