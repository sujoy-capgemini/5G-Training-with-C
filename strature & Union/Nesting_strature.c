#include <stdio.h>
#include <string.h>
int main() {
    //Code
    typedef struct pockemon{
        int speed;
        float attack;
        char type[10];
    }pockemon;

    typedef struct leg_pockemon{
        /*
        int speed;
        float attack;
        char type[10];*/
        pockemon p1; //*Nesting strature....
        char ability[10];
    }leg_pockemon;

    pockemon pikachu;
    pockemon pikachu={100,70.0,"Electric"};
    pockemon charizard={80,120,"Fire"};
    leg_pockemon mewtow;
    mewtow.p1.attack=130;
    mewtow.p1.speed=130;
    strcpy(mewtow.p1.type,"Psychic");
    strcpy(mewtow.ability,"Pressure");

    return 0;
}