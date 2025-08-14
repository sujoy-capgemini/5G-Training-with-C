#ifndef COMMON_H
#define COMMON_H

typedef struct{
    unsigned int a;
    unsigned int b;
}test_struct_t;

typedef struct{
    unsigned int c;
}result_struct_t;

#endif

/*
   #ifndef,#define,##endif -> 
   Header guard (same file two many time include then
                 no error come so this use)
*/
