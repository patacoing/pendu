#include "lib.h"

void read(int* tab,const char c,const char *word,char* find_word){
    int* value = isCin(tab,c,word);
    for(int i=0;i<strlen(word);i++){
        if(value[i]) {
            find_word[i] = word[i];
        }
    } 
}

int* isCin(int* tab,const char c,const char *word){
    tab = malloc(strlen(word));  
    int i=0;
    while(word[i]!= '\0'){
        if(word[i] == c) tab[i] = 1;
        else tab[i] = 0;
        i++;
    }
    return tab;
}