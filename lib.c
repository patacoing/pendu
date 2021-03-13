#include "lib.h"

boolean read(const char c,const char *word,char* find_word){
    //1. connaitre la position du caractère dans hidden word (idex sinon -1) : fonction qui renvoie un tableau de int (taille calculée dynamiquement)
    //2. remplacer les "*" dans find_word par le carcatère aux bonnes positions
    //int flag = 0;
    int* tab = isCin(c,word,find_word);
    int taille = tab[0];
    for(int i=1;i<taille+1;i++)printf("tab[%d] : %d\n",i,tab[i]);     
    return 1;
}

int* isCin(const char c,const char *word,char* find_word){
    int nb_in = 0;
    
    int i=0;
    while(word[i]!= '\0'){
        if(word[i] == c) nb_in +=1;
        i++;
    }
    int* return_value = malloc((nb_in * sizeof(int))+1);
    i = 0;
    return_value[0] = nb_in;
    int j=1;
    while(word[i]!= '\0'){
        if (word[i] == c){
            return_value[j] = i;
            j++;
        }
        i++;
    }
    return return_value;
    free(return_value);
}