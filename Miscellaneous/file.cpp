#include<stdio.h>
int main()
{
    char arr1[] = {'A','B','D'};      //-> char array
    char arr2[] = {'A','B','C','\0'};      //-> string

    printf("%s\n",arr1);  //contains a garbage character
    printf("%s",arr2);
}