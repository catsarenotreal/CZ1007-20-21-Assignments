#include <stdio.h>

/// QUESTION 1
/*
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
  int noOfHours, payRate;
  double grossPay;
          
  printf("Enter number of hours: \n");
  scanf("%d", &noOfHours);
  printf("Enter hourly pay rate: \n");
  scanf("%d", &payRate);
  printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
  computePay2(noOfHours, payRate, &grossPay);
  printf("computePay2(): %.2f\n", grossPay);
  return 0;
}   

double computePay1(int noOfHours, int payRate)
{
  if (noOfHours - 160 <= 0){
    int pay = noOfHours * payRate;
    return pay;
  }
  else {
    double pay = (noOfHours - 160) * payRate * 1.5 + 160 * payRate;
    return pay;
  }
}

void computePay2(int noOfHours, int payRate, double *grossPay)
{
  *grossPay = 0;
  if (noOfHours - 160 <= 0){
    *grossPay += noOfHours * payRate;
  }
  else{
    *grossPay += (noOfHours - 160) * payRate * 1.5 + 160 * payRate;
  }
}
*/

/// QUESTION 2
/*
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);  
void computeSalary2(int noOfHours, int payRate, double *grossPay);
int main()
{
   int id = -1, noOfHours, payRate;
   double grossPay;
           
   readInput(&id, &noOfHours, &payRate);      
   while  (id != -1) {
      printf("computeSalary1(): ");
      grossPay = computeSalary1(noOfHours, payRate);
      printf("ID %d grossPay %.2f \n", id, grossPay);
      printf("computeSalary2(): ");
      computeSalary2(noOfHours, payRate, &grossPay);
      printf("ID %d grossPay %.2f \n", id, grossPay);
      readInput(&id, &noOfHours, &payRate);
   }
   return 0;
}

void readInput(int *id, int *noOfHours, int *payRate)
{
  printf("Enter ID (-1 to end): \n");
  scanf("%d", id);
  if (*id == -1) {
    return;
  }
  else{
    printf("Enter number of hours: \n");
    scanf("%d", noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", payRate);
  }
}    

double computeSalary1(int noOfHours, int payRate)
{
  double pay;
  if (noOfHours > 160){
    pay = (noOfHours - 160) * payRate * 1.5 + 160 * payRate;
  }
  else{
    pay = noOfHours * payRate;
  }
  return pay;
}

void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
  if (noOfHours > 160){
    *grossPay = (noOfHours - 160) * payRate * 1.5 + 160 * payRate;
  }
  else{
    *grossPay = noOfHours * payRate;
  }
}

*/

/// QUESTION 3
/*
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);
int main()
{
  int m, n, q, r;
  
  printf("Enter two numbers (m and n): \n");
  scanf("%d %d", &m, &n);
  q = divide1(m, n, &r);
  printf("divide1(): quotient %d remainder %d\n", q, r);
  divide2(m, n, &q, &r);
  printf("divide2(): quotient %d remainder %d\n", q, r);
  return 0;
}
int divide1(int m, int n, int *r)
{
  int counter = 0;
  while (m >= n){
    m -= n;
    counter += 1;
  }
  *r = m;
  return counter;
}

void divide2(int m, int n, int *q, int *r)
{
  *q = 0;
  while (m >= n){
    m -= n;
    *q += 1;
  }
  *r = m;
}
*/

/// QUESTION 4
/*
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
   int power;
   float number, result = -1;
    
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                           
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);               
   return 0;
}

float power1(float num, int p)
{
  float ans = 1;
  if (num == 0){
    return 0;
  }
  if (p > 0){
    for (int i = 0; i < p; i++){
      ans *= num;
    }
    return ans;
  }
  else if (p < 0){
    num = 1 / num;
    for (int i = 0; i < -p; i++){
      ans *= num;
    }
    return ans;
  }
  else{
    return ans;
  }
}

void power2(float num, int p, float *result)
{ 
  *result = 1;
  if (num == 0){
    *result = 0;
  }
  else if (p > 0){
    for (int i = 0; i < p; i++){
      *result = *result * num;
    }
  }
  else{
    num = 1 / num;
    for (int i = 0; i < -p; i++){
      *result = *result * num;
    }
  }
}
*/

/// QUESTION 5
/*
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
  int x,y,result = -1;       
  printf("Enter 2 numbers: \n");
  scanf("%d %d", &x, &y);
  printf("gcd1(): %d\n", gcd1(x, y));  
  gcd2(x,y,&result);
  printf("gcd2(): %d\n", result);       
  return 0;
}

int gcd1(int num1, int num2)  
{
  int r = -1;
  if (num2 > num1) {
    int k = num1;
    num1 = num2;
    num2 = k;
    }    
  while (r != 0){
    r = num1 % num2;
    num1 = num2;
    num2 = r;
   }
 return num1; 
}

void gcd2(int num1, int num2, int *result)  
{
  *result = -1; 
  if (num2 > num1) {
    int k = num1;
    num1 = num2;
    num2 = k;
    }    
  while (*result != 0){
    *result = num1 % num2;
    num1 = num2;
    num2 = *result;
  }
  *result = num1; 
}
*/

/// QUESTION 6
/*
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
  int number, result=0;       
      
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("Calling perfectProd1() \n");
  printf("perfectProd1(): %d\n", perfectProd1(number));
  
  printf("Calling perfectProd2() \n");
  perfectProd2(number, &result);
  printf("perfectProd2(): %d\n", result);
  return 0;
}

int perfectProd1(int num)
{
  int mul = 1;
  for (int i = 2; i < num; i++){
    int sum = 0;
    for (int j = 1; j < i; j++){
      if (i % j == 0){  
        sum += j;
      }
    } 
    if (sum == i) mul *= i;
  }
  return mul;
}

void perfectProd2(int num, int *prod)
{   
  *prod = 1;
  for (int i = 2; i < num; i++){
    int sum = 0;
    for (int j = 1; j < i; j++){
      if (i % j == 0){  
        sum += j;
      }
    } 
    if (sum == i) *prod *= i;
  }
}
*/

/// QUESTION 7
/*
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
  int num, digit, result= -1;
  
  printf("Enter the number: \n");
  scanf("%d", &num);      
  printf("Enter k position: \n");
  scanf("%d", &digit);    
  printf("digitValue1(): %d\n",  digitValue1(num, digit));
  digitValue2(num, digit, &result);
  printf("digitValue2(): %d\n", result);    
  return 0;
}

int digitValue1(int num, int k)
{
  int output = 0;
  for (int i = 0; i < k - 1; i++){
    num = num / 10;
  }
  output = num % 10;
  
  return output;
}

void digitValue2(int num, int k, int *result)  
{
  for (int i = 0; i < k - 1; i++){
    num = num / 10;
  }
  *result = num % 10;
}
*/

/// QUESTION 8
/*
int sumSqDigits1(int num);    
void sumSqDigits2(int num, int *result);    
int main()
{
   int num, result;
   printf("Enter a number: \n");
   scanf("%d", &num);
   printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
   sumSqDigits2(num, &result);
   printf("sumSqDigits2(): %d\n", result);
   return 0;
}

int sumSqDigits1(int num)  
{
  int sum = 0;
  int digit;
  while (num != 0){
    digit = num % 10;
    num = (num - digit) / 10;
    sum += digit * digit;
  }
  return sum;
}

void sumSqDigits2(int num, int *result)  
{
  int digit;
  *result = 0;
  while (num != 0){
    digit = num % 10;
    num = (num - digit) / 10;
    *result += digit * digit;
  }
}
*/

/// QUESTION 9
/*
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
  int number, result;
  
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
  countEvenDigits2(number, &result);
  printf("countEvenDigits2(): %d\n", result);
  return 0;
}

int countEvenDigits1(int number)  
{   
  int counter = 0;
  while (number > 0){
    if (number % 2 == 0) counter += 1;
    number = number / 10;
  }
  return counter;
}

void countEvenDigits2(int number, int *count)  
{   
  *count = 0;
  while (number > 0){
    if (number % 2 == 0) *count += 1;
    number = number / 10;
  }
}
*/

/// QUESTION 10
/*
int allEvenDigits1(int num);  
void allEvenDigits2(int num, int *result);     
int main()
{
  int number, p=999, result=999;
  printf("Enter a number: \n");
  scanf("%d", &number);
  p = allEvenDigits1(number);
  if (p == 1)
    printf("allEvenDigits1(): yes\n");
  else if (p == 0)
    printf("allEvenDigits1(): no\n");
  else  
    printf("allEvenDigits1(): error\n");
  allEvenDigits2(number, &result);
  if (result == 1)
    printf("allEvenDigits2(): yes\n");
  else if (result == 0)
    printf("allEvenDigits2(): no\n");
  else  
    printf("allEvenDigits2(): error\n");
  return 0;
}

int allEvenDigits1(int num)  
{
  int p = 0;
  while (num > 0){
    if (num % 2 == 0) p = 1;
    else return p = 0;
    num = num / 10; 
  }
  return p;
}

void allEvenDigits2(int num, int *result)  
{
  *result = 0;
  while (num > 0){
    if (num % 2 == 0) *result = 1;
    else {*result = 0; break; }
    num = num / 10; 
  }
}
*/

/// QUESTION 11
/*
int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main()
{
  int number, result;

  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("countOddDigits1(): %d\n", countOddDigits1(number));
  countOddDigits2(number, &result);
  printf("countOddDigits2(): %d\n", result);
  return 0;
}

int countOddDigits1(int number)
{
  int counter = 0;
  while (number > 0){
    if (number % 2 == 1) counter += 1;
    number = number / 10;
  }
  return counter;
}

void countOddDigits2(int number, int *count)
{
  *count = 0;
  while (number > 0){
    if (number % 2 == 1) *count += 1;
    number = number / 10;
  }
}   
*/

/// QUESTION 12
/*
int allOddDigits1(int num);
void allOddDigits2(int num, int *result);
int main()
{
  int number, p=999, result=999;
  printf("Enter a number: \n");
  scanf("%d", &number);
  p = allOddDigits1(number);
  if (p == 1)
  printf("allOddDigits1(): yes\n");
  else
  printf("allOddDigits1(): no\n");
  allOddDigits2(number, &result);
  if (result == 1)
  printf("allOddDigits2(): yes\n");
  else
  printf("allOddDigits2(): no\n");
  return 0;
}

int allOddDigits1(int num)
{
  int p = 0;
  while (num > 0){
    if (num % 2 == 1) p = 1;
    else return p = 0;
    num = num / 10; 
  }
  return p;
}

void allOddDigits2(int num, int *result)
{
  *result = 0;
  while (num > 0){
    if (num % 2 == 1) *result = 1;
    else {*result = 0; break; }
    num = num / 10; 
  }
} 
*/

/// QUESTION 13
/*
#include <math.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
  int number, result = INIT_VALUE;
  
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
  extEvenDigits2(number, &result);
  printf("extEvenDigits2(): %d\n", result);
  return 0;
}

int extEvenDigits1(int num)  
{   
  int result = 0; int counter = 0;
  while (num > 0){
    if (num % 2 == 0){
    int a = num % 10; 
    result += a * pow(10, counter);
    counter++;
    }
    num = num / 10;
  }
  if (result == 0) result = -1;
  return result; 
}

void extEvenDigits2(int num, int *result)  
{   
  *result = 0;
  int counter = 0;
  while (num > 0){
    if (num % 2 == 0){
    int a = num % 10; 
    *result += a * pow(10, counter);
    counter++;
    }
    num = num / 10;
  }
  if (*result == 0) *result = -1;
}
*/


/// QUESTION 14
/*
#include <math.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extOddDigits1(): %d\n", extOddDigits1(number));         
   extOddDigits2(number, &result);
   printf("extOddDigits2(): %d\n", result);
   return 0;
}

int extOddDigits1(int num)  
{ 
  int newnum = 0, oddnum;  
  int counter = 0;
  while (num != 0){
    if (num % 2 == 0){
      int bob;
    }
    else{
      oddnum = num % 10;
      newnum += pow(10, counter) * oddnum;
      counter += 1;
    }
    num = num / 10;
  }
  if (newnum == 0){
    return -1;
  }
  else{
    return newnum;
  }
}

void extOddDigits2(int num, int *result)  
{   
  int oddnum;  
  *result = 0;
  int counter = 0;
  while (num != 0){
    if (num % 2 == 0){
      int bob;
    }
    else{
      oddnum = num % 10;
      *result += pow(10, counter) * oddnum;
      counter += 1;
    }
    num = num / 10;
  }
  if (*result == 0){
    *result = -1;
  }
  else{
    return;
  }
}
*/

/// QUESTION 15
/*
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
  int num, result=999;
  printf("Enter a number: \n");
  scanf("%d", &num);      
  printf("reverseDigits1(): %d\n", reverseDigits1(num));
  reverseDigits2(num, &result);
  printf("reverseDigits2(): %d\n", result);
  return 0;
}

int reverseDigits1(int num)
{
  int result = 0;
  while (num > 0){
    int a = num % 10;
    result = 10 * result + a;
    num = num / 10;
  }
  return result;
}

void reverseDigits2(int num, int *result)
{
  *result = 0;
  while (num > 0){
    int a = num % 10;
    *result = 10 * *result + a;
    num = num / 10;
  }
}
*/