#include "lib_pendu.h"

bool entrer_lettre(char* c){
    bool res = true;

    char s[MAX_SIZE];
    scanf(" %s", s);
    *c = s[0];

    if(*c >= 'A' && *c <= 'Z')//si le caractere entre est en majuscule
        *c = *c + 'a' - 'A';//on le met en minuscule

    if(*c < 'a' || *c > 'z')//on teste si le caractere est une lettre minuscule
        res = false;//si non on renvoie une erreur

    return res;
}
