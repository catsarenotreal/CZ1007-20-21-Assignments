/// QUESTION 1
/*
#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()  
{
  char a[80],b[80];
  char ch, *p;
  
  printf("Enter a string: \n");   
  fgets(a, 80, stdin);
  if (p=strchr(a,'\n')) *p = '\0';  
  printf("Enter a character to be inserted: \n");   
  ch = getchar();
  insertChar(a,b,ch);
  printf("insertChar(): ");   
  puts(b);      
  return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
  int counter = 3;
  while (*str1 != '\0'){
    *str2 = *str1;
    counter--;
    str2++; str1++;
    if (counter == 0){
      *str2 = ch;
      str2++;
      counter = 3;
      if (*(str1 + 1) == '\0'){
        *str2 = '\0';
        break;
      }
    }
  }
  str2 = &str2[0];
}
*/


/// QUESTION 2
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int longWordLength(char *s);
int main()  
{
  char str[80], *p;
  
  printf("Enter a string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';    
  printf("longWordLength(): %d\n", longWordLength(str));     
  return 0;
}

int longWordLength(char *s)
{
  int tempvalue[80]; int *arrptr; int tempcounter = 0;
  arrptr = tempvalue;
  
  while (*s != '\0'){
    if (*s == ' ' || ispunct(*s) != 0){ 
      *arrptr = tempcounter;
      arrptr++;
      tempcounter = 0;
    }
    else {
      tempcounter++;
    }
    if (*(s + 1) == '\0'){
      *arrptr = tempcounter;
    }
    s++;
  }

  arrptr = &tempvalue[0];

  while (*arrptr){
    if (*arrptr > tempvalue[0]) tempvalue[0] = *arrptr;

    else ;
    arrptr++;
  }


  return tempvalue[0];
}
*/

/// QUESTION 3
/*
#include <stdio.h>   
#include <string.h>  
char *stringrChr(char *s, char ch);
int main()
{
  char s[80], c, *p;
  char *temp=NULL;
  
  printf("Enter a string: \n");
  fgets(s, 80, stdin);
  if (p=strchr(s,'\n')) *p = '\0';  
  printf("Enter a char: \n");
  scanf("%c", &c);     
  temp = stringrChr(s, c);  
  if (temp!=NULL)   
    printf("stringrChr(): %s\n", temp);    
  else  
    printf("stringrChr(): null string\n");
  return 0;
}

char *stringrChr(char *s, char ch)
{
  char news[80]; int counter = 0;
  while (*s != '\0'){
    if (*s == ch && counter == 0){
      news[counter] = *s;     
      counter++;
    }
    else if (*s == ch && counter != 0){
      counter = 0;
      news[counter] = *s;
      counter++;
    }  
    else if (*s != ch && counter != 0){
      news[counter] = *s;
      counter++;
    }
    s++; 
  }
  if (counter != 0){
    news[counter] = '\0';
    return news;
  }
  else return NULL;
}
*/

/// QUESTION 4
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void processString(char *str, int *totVowels, int *totDigits);

int main()
{
  char str[50], *p;
  int totVowels, totDigits;
  printf("Enter the string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';  
  processString(str, &totVowels, &totDigits);    
  printf("Total vowels = %d\n", totVowels);
  printf("Total digits = %d\n", totDigits);
  return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
  *totVowels = 0; *totDigits = 0;
  while (*str != '\0'){
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
      *totVowels = *totVowels + 1; 
    }
    else if (*str <= '9' && *str >= '0'){
      *totDigits = *totDigits + 1;
    }
    str++;
  }
}
*/

/// QUESTION 5
/*
#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()  
{
  char str[80], *p;
  
  printf("Enter a string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';    
  printf("longWordLength(): %d\n", longWordLength(str));     
  return 0;
}

int longWordLength(char *s)
{
  int counter = 0; int max = -1;
  while (*s != '\0'){
    if (*s == ' '){
      if (counter < max) counter = 0;
      else {max = counter; counter = 0;}
    }
    else if (*s == '!' || *s == '.'){
      if (counter < max) counter = 0;
      else {max = counter; counter = 0;}
    }     
    else if (*(s + 1) == '\0'){
      counter++;
      if (counter < max) counter = 0;
      else {max = counter; counter = 0;}
    }
    else{
      counter++;
    }  
    s++;   
  }
  return max;
}
*/

/// QUESTION 6
/*
#include <stdio.h>  
#include <string.h>
int countWords(char *s);
int main()  
{
  char str[80], *p;
  printf("Enter the string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';    
  printf("countWords(): %d", countWords(str));
  return 0;
}

int countWords(char *s)
{
  int counter = 0;
  while (*s != '\0'){
    if (*s == ' '){
      counter++;
    }
    s++;
  }
  counter++;
  return counter;
}
*/

/// QUESTION 7
/*
#include <stdio.h>
#include <string.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);
int main()
{
  int i, size, length;   
  char str[N][40], first[40], last[40], *p, *result;
  char dummychar;   
  
  printf("Enter array size: \n");
  scanf("%d", &size);
  scanf("%c", &dummychar);
  for (i=0; i<size; i++) {
    printf("Enter string %d: \n", i+1);
    fgets(str[i], 40, stdin);
    if (p=strchr(str[i],'\n')) *p = '\0';   
  }  
  result = longestStrInAr(str, size, &length);
  printf("longest: %s \nlength: %d\n", result, length);         
  return 0;
}

char *longestStrInAr(char str[N][40], int size, int *length)
{
  int max = 0; int r;
  for (int row = 0; row < size; row++){
    int counter = 0;
    for (int j = 0; str[row][j] != '\0'; j++){
      counter++;
    }
    if (counter > max){
      max = counter;
      r = row;
    }
  }
  *length = max;
  return str[r];
}
*/

/// QUESTION 8
/*
#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main()
{
  char word[SIZE][40];
  char first[40], last[40];
  int i, size;  
  
  printf("Enter size: \n");
  scanf("%d", &size);
  printf("Enter %d words: \n", size);
  for (i=0; i<size; i++)
    scanf("%s", word[i]);  
  findMinMaxStr(word, first, last, size);   
  printf("First word = %s, Last word = %s\n", first, last);         
  return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
  char temp[40];
  strcpy(temp, word[0]);

  for (int i = 0; i < size; i++){
    if (strcmp(temp, word[i]) < 0);
    else strcpy(temp, word[i]);
  }
  strcpy(first, temp);

  char temp2[40];
  strcpy(temp2, word[0]);
  for (int i = 0; i < size; i++){
    if (strcmp(temp2, word[i]) > 0);
    else strcpy(temp2, word[i]);
  }
  strcpy(last, temp2);

} 
*/


/// QUESTION 9
/*
#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()  
{
  char str[80], *p;
  
  printf("Enter a string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';  
  printf("maxCharToFront(): ");   
  maxCharToFront(str);  
  puts(str);
  return 0;
}

void maxCharToFront(char *str)  
{
  int y = 0; char letter;
  char str2[80];
  int counter = 0;
  strcpy(str2, str); // copied whole string to str2
  letter = str[0]; // letter is character only
  while (*str != '\0'){
    counter++;
    if (letter < *str){ //found the smalleststs letter
      letter = *str;
    }
    else; 
    str++;
  }
  str = str - counter; // back to index 0
  if (letter == str[0]){}
  else{
    str[0] = letter; //first in string is the letter
    for (int i = 0; i < strlen(str2); i++){
      y++;
      if (str2[y] != letter){ // as long as we don't reach the ltter yet we copy over
        str[y] = str2[i];
      }
      else{ counter = i; break; } //once we reach the letter, break
    }
    for (int j = counter; j < strlen(str2); j++){
      str[y] = str2[j];
      if (j == strlen(str2) - 1) str[y++] = '\0'; break;
      y++;
    } }
}
*/

/// QUESTION 10
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cipher(char *s);  
void decipher(char *s);
int main()
{
  char str[80], dummychar, *p;
  int choice;

  printf("Select one of the following options: \n");
  printf("1: cipher() \n");      
  printf("2: decipher() \n");
  printf("3: exit() \n");  
  do {
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:   
          scanf("%c",&dummychar);
          printf("Enter the string: \n");
          fgets(str, 80, stdin);
          if (p=strchr(str,'\n')) *p = '\0';   
          printf("To cipher: %s ‐> ", str);
          cipher(str);
          printf("%s\n", str);  
          break;
        case 2:  
          scanf("%c",&dummychar);   
          printf("Enter the string: \n");
          fgets(str, 80, stdin);
          if (p=strchr(str,'\n')) *p = '\0';   
          printf("To decipher: %s ‐> ", str);
          decipher(str);
          printf("%s\n", str);   
          break;
        default:
          break;
    }
  } while (choice < 3);     
  return 0;
}

void cipher(char *s)   
{
  while (*s != '\0'){
    if (*s == 'z') *s = 'a'; 
    else if (*s == 'Z') *s = 'A';
    else if (*s == '1' || *s == '2' || *s == '3' || *s == '4' || *s == '5' || *s == '6' || *s == '7' || *s == '8' || *s == '9' || *s == '0' || *s == ' ') {;}
    else *s = (*s + 1);
    s++;
  }
}

void decipher(char *s)   
{
  while (*s != '\0'){
    if (*s == 'a') *s = 'z'; 
    else if (*s == 'A') *s = 'Z';
    else if (*s == '1' || *s == '2' || *s == '3' || *s == '4' || *s == '5' || *s == '6' || *s == '7' || *s == '8' || *s == '9' || *s == '0' || *s == ' ') {;}
    else *s = (*s - 1);
    s++;
  }
}
*/

/// QUESTION 11
/*
#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main()
{
  char str[40], substr[40], *p;  
  int result = INIT_VALUE;      
  printf("Enter the string: \n");
  fgets(str, 80, stdin);
  if (p=strchr(str,'\n')) *p = '\0';  
  printf("Enter the substring: \n");
  fgets(substr, 80, stdin);
  if (p=strchr(substr,'\n')) *p = '\0';  
  result = findSubstring(str, substr);
  if (result == 1)
    printf("findSubstring(): Is a substring\n");
  else if ( result == 0)
    printf("findSubstring(): Not a substring\n");   
  else         
    printf("findSubstring(): An error\n");    
  return 0;
}

int findSubstring(char *str, char *substr)   
{
  int counter = 0;
  int len = 0;

  for (int i = 0; str[i] != '\0'; i++){
    if (*substr == '\0'){return 1;}
    if (str[i] == *substr){
      counter++;
      substr++;
    }
    else if (str[i] != *substr && counter != 0){
      substr = substr - counter;
      counter = 0;
    }
  }
  substr = substr + 1;
  if (*substr == '\0') return 1;
  else return 0;
}
*/