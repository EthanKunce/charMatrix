// #include <random>
#include <string.h>
#include "Arduino.h"
#include "charMatrix.h"


// calculates a random char from 32 - 47 in a random indice in str
// O(1)
void stringRandomizer(char *str){
    int j = strlen(str) - 1;
    // srand(time(NULL));
    randomSeed(random());
    j = random(j);  //calculates a random indice of str
    str[j] = ((char) random(32, 47));   //assigns a random char from 32 - 47, to the indice j of str
}


//compares str to str1, 
//if the difference of characters is greater than 3, sets str1 to str
//O(n), n is the length of str
void stringCmp(char *str, char *str1){

    if(strlen(str) != strlen(str1))
        return;

    int i = 0, errorCounter = 0;

    while(++i < strlen(str)){
        if(str[i] != str1[i])
            errorCounter++;
    }

    if(errorCounter > 2){
        strcpy(str, str1);
    }
}