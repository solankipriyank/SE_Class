#include(stdio.h)
int main(){
    char c;
    printf("enter the character");
    scanf("%c",&c);
    
    if(c='a' || c='e' || c='i' || c='o' || c='u'|| c='A' || c='E' || c='I' || c='O' || c='U')
    {
             printf("%c" is vowel",c);
             }
             else
             {
                 printf("%c is not",c);
                 }
}

