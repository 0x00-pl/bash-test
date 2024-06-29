#include <stdio.h>

void phello(){
 printf("hello world!\n");
}

typedef void phello_f();

int main(int argc, char **argv){
 phello_f *pf;
 pf = &phello;
 (****pf)();

 char arr[10] = {0};
 //printf("sizeof(%s)==%u\n", "char arr[10]", sizeof(arr));
 printf("arr: %p  \n&arr: %p\n", arr, &arr);
 return 0;
}
