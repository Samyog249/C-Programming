#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    char str[50];
    int i,len;
    int check = 0;
    printf("Enter the palendrome: ");
    gets(str);
    len = strlen(str);
    for (i=0;i<len /2;i++){
        if (str[i] !=str[len -1 -i])
        {
            check =1;
            break;
        }
    }
        if(check==0){
            printf("It is palindrome.");
        }else{
            printf("It is not a palindrome.");
        }

    return 0;
}