#include <stdio.h>
#include <math.h>

/// QUESTION 1
/*
#include <stdio.h>
int main()  
{
  float temp;
  temp = 0;
  while (temp != -1){
    printf("Enter the temperature in degree F: \n");
    scanf("%f", &temp);
    if (temp == -1) break;
    else{
      float ctemp; 
      ctemp = (temp - 32) * 5 / 9;
      printf("Converted degree in C: %.2f \n", ctemp);}
  }

  return 0;
}
*/


/// QUESTION 2
/*
int main()  
{
  printf("Enter the number of times: \n");
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    int c; float r;
    printf("Enter the current: \n");
    scanf("%d", &c);
    printf("Enter the resistance: \n");
    scanf("%f", &r);
    float pl = c * c * r;
    printf("The power loss: %.2f \n", pl);
  }
  return 0;
}
*/
    
/// QUESTION 3
/*
#define PI 3.1416
int main()  
{
  int n;
  printf("Enter the number of times: \n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    int r, h;
    printf("Enter the radius: \n");
    scanf("%d", &r);
    printf("Enter the height: \n");
    scanf("%d", &h);
    float v = PI * r * r * h;
    float sa = PI * 2 * (r * h + r * r);
    printf("The volume is: %.2f \n", v);
    printf("The surface area is: %.2f \n", sa);
  }
  return 0;
}
*/

/// QUESTION 4
/*
int main()
{
  int n;
  printf("Enter number of times: \n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    float d, t;
    printf("Enter distance (in km): \n");
    scanf("%f", &d);
    printf("Enter time (in sec): \n");
    scanf("%f", &t);
    float s = d / t;
    printf("The speed is %.2f km/sec \n", s);
  }
  return 0;
} 
*/


/// QUESTION 5

/*
int main() {
  int num;
  float x1, x2, y1, y2;
  float distance(float X1, float X2, float Y1, float Y2);
  printf("Enter the number of times: \n");
  scanf("%d", &num);
  for (int i=0; i < num; i++){
    printf("Enter first point x1 y1: \n");
    scanf("%f %f", &x1, &y1);
    printf("Enter second point x2 y2: \n");
    scanf("%f %f", &x2, &y2);
    printf("The distance is %.2f \n", distance(x1, x2, y1, y2));
  }

  return 0;
}


float distance(float X1, float X2, float Y1, float Y2){
  float x_diff = (X1 - X2) * (X1 - X2);
  float y_diff = (Y1 - Y2) * (Y1 - Y2);
  float d = sqrt(x_diff + y_diff);
  return d;
}
*/

/// QUESTION 6
/*
int main()  
{
  printf("Enter a1, b1, c1, a2, b2, c2: \n");
  int a1, b1, c1, a2, b2, c2;
  scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
  float deno = a1 * b2 - a2 * b1;
  if (deno == 0){
    printf("Denominator is zero! \n");
  }
  else{
    float x = (b2 * c1 - b1 * c2) / deno;
    float y = (a1 * c2 - a2 * c1) / deno;
    printf("x = %.2f, y = %.2f \n", x, y); 
  }
  return 0;
}
*/

/// QUESTION 7
/*
int main()  
{
  printf("Enter your characters (# to end): \n");
  char thing; int num; int counter1 = 0, counter2 = 0;
  while (1){
    scanf("%c", &thing);
    if (thing >= '0' && thing <= '9') counter1++;
    else if (thing >= 'a' && thing <= 'z') counter2++;
    else if (thing == '#') break;
  }
  printf("The number of digits: %d \n", counter1);
  printf("The number of letters: %d \n", counter2);
  return 0;
}
*/

/// QUESTION 8
/*
int main()  
{
  printf("Enter a character: \n");
  char c;
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z') printf("Lower case letter \n");
  else if (c >= 'A' && c <= 'Z') printf("Upper case letter \n");
  else if (c >= '0' && c <= '9') printf("Digit \n");
  else printf("Other character \n");
  return 0;   
}
*/

/// QUESTION 9
/*
int main()  
{         
  int hr; float pay;
  printf("Enter hours of work: \n");
  scanf("%d", &hr);
  if (40 - hr >= 0){
    pay = 6 * hr;
  }
  else {
    pay = 6 * 40 + 1.5 * 6 * (hr - 40);
  }
  printf("Gross pay = %.2f \n", pay);
  float tax;
  if (pay <= 1000){
    tax = pay / 10;
  }
  else if (pay > 1000 && pay < 1500){
    tax = 1000 / 10 + (pay - 1000) * .2;
  }
  else{
    tax = 1000 / 10 + 500 * .2 + .3 * (pay - 1500);
  }
  printf("Tax = %.2f \n", tax);
  float net = pay - tax;
  printf("Net pay = %.2f \n", net);
  return 0;   
}
*/

/// QUESTION 10
/*
int main()  
{  
  int monies; int merit; char grade;
  printf("Enter the salary: \n");
  scanf("%d", &monies);
  printf("Enter the merit: \n");
  scanf("%d", &merit);
  if (merit < 10 && monies >= 600 && monies <= 649) grade = 'C';
  else if (merit >= 10 && monies >= 600 && monies <= 649) grade = 'B';
  else if (merit < 20 && monies >= 700 && monies <= 799) grade = 'B';
  else if (merit >= 20 && monies >= 700 && monies <= 799) grade = 'A';
  else if (monies >= 700 && monies <= 899) grade = 'A';
  else if (monies >= 600 && monies <= 799) grade = 'B';
  else grade = 'C';
  printf("The grade: %c \n", grade);
  return 0;   
}
*/

/// QUESTION 11

/*
int main()  
{  
  float list_price;
  int cat;
  float total_price(float LISTP, int CAT);
  printf("Please enter the list price: \n");
  scanf("%f", &list_price);
  printf("Please enter the category: \n");
  scanf("%d", &cat);
  printf("Total price is $%.2f", total_price(list_price, cat));
  return 0;   
} 

float total_price(float LISTP, int CAT){
  float disc = LISTP * 0.9;
  float postgst = 0;
  if (disc > 100000){
    postgst += disc * 1.1 * 1.03;
  }
  else{
    postgst += disc * 1.03;
  }
  switch(CAT){
    case 1: postgst += 70000; break;
    case 2: postgst += 80000; break;
    case 3: postgst += 23000; break;
    case 4: postgst += 600; break;
    }
  return postgst;
  }
*/

/// QUESTION 12
/*
int main()  
{
  int num;
  printf("Enter a number (between 1 and 9): \n");
  scanf("%d", &num);
  printf("Multiplication Table: \n");
  printf("  ");
  for (int i = 1; i <= num; i++){
    printf("%d ", i);
    if (i == num) printf("\n");
  }
  for (int i = 1; i <= num; i++){
    printf("%d ", i);
    for (int j = 1; j <= i; j++){
      printf("%d ", i * j);
      if (i == j) printf("\n");
  }
  }

  return 0;   
}
*/


/// QUESTION 13

/*
int main()  
{  
  void computeTotal(int numOfLines);  
  int numOfLines;
  printf("Enter number of lines: \n");          
  scanf("%d", &numOfLines);    
  computeTotal(numOfLines);
  return 0;
}

void computeTotal(int numOfLines){         
  for (int i = 1; i <= numOfLines; i++){
    printf("Enter line %d: \n", i);
    int sum = 0;
    int numOfEle;
    scanf("%d", &numOfEle);
    while (numOfEle != 0){
      int lstnum;
      scanf("%d", &lstnum);
      sum += lstnum;
      numOfEle -= 1;
    }
    printf("Total: %d \n", sum);
  }
}
*/

/// QUESTION 14
/*
void printPattern2(int height);
int main() {
  int height;
  printf("Enter the height: \n");
  scanf("%d", &height);
  printf("printPattern2(): \n");
  printPattern2(height);
  return 0;
}

void printPattern2(int height) {
  for (int i = 1; i <= height; i++){
    if (i == 1){
      printf("A \n");
    }
    else if (i % 2 == 0){
      for (int j = 1; j <= (i / 2); j++) {
        printf("BA");
      }
      printf("\n");
    }
    else {
      printf("A");
      for (int j = 1; j <= (i / 2); j++) {
        printf("BA");
      }
      printf("\n");
    }
  }
}
*/

/// QUESTION 15
/*
int main()
{
  int height;
  printf("Enter the height: \n");
  scanf("%d", &height);
  printf("The pattern is: \n");
  for (int i = 1; i <= height; i++){
    for (int j = 0; j < i; j++){
      printf("%d", (i + j) % 10);
      if (i == j + 1) printf("\n");
    }
  }
  return 0;
}
*/