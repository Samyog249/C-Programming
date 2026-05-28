#include<stdio.h>
int main(){
char letter;
int isLoweCaseVowel;
int isUperCaseVowel;

printf("Enter your letter: ");
scanf("%c", &letter);
isLoweCaseVowel =(letter=='a'|| letter == 'e'|| letter=='i'|| letter=='o'||letter=='u');
isUperCaseVowel =(letter=='A'|| letter == 'E'|| letter=='I'|| letter=='O'||letter=='U');
if(isLoweCaseVowel|| isUperCaseVowel )
printf("%c is Vowel",letter);
else
printf("%c is not vowel",letter);
return 0;
}
