int lengthOfLastWord(char* s) {
int c = 0;
int l=strlen(s);
for(int i = l-1 ; i >=0 ; i--){
    if(s[i]==' '){
        if(c > 0){
            break;
        }
    }
    else{
        c++;
    }
}    
return c;
}