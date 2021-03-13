#include "lib.h"


#define TRUE 1
#define FALSE 0



int main(){
    int trys = 10;
    char hidden_word[50] = "MARRRON";
    char find_word[50] = "******";
    char c;
    boolean flag = FALSE;
    //while (trys >=0 && flag == FALSE){
        printf("nombre d'essais restants : %d\n",trys);
        puts("Entrer une lettre : ");
        c = getchar();
        read(c,hidden_word,find_word);
        /*printf("mot caché : %s\n",find_word);
        if(strcmp(hidden_word,find_word) == 0) flag = TRUE;
        else trys--;*/
    //}
    if(flag == TRUE) puts("VOUS AVEZ GAGNE !");
    else printf("perdu ! le mot caché était : %s\n",hidden_word);
    return 0;
}


