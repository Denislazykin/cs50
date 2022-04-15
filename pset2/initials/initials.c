#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    
    string name;
    name = GetString();
    
    // Получить символы от пользователя
    int n = strlen(name);
    
    printf("%c",toupper(name[0]));
    
   // Печать инициалов после пробела 
   for (int i = 0; i < n; i++)
   {
       if(name[i] == ' ')
       {
           printf("%c",toupper(name[i+1]));
       }
   }
   printf("\n");
    
}