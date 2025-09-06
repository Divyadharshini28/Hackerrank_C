#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    
    char s[100];
    scanf("%s", s);
    
    getchar();
    
    
    char sen[100];
    fgets(sen, sizeof(sen), stdin);  
      
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}
