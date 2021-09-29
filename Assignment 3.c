#include <stdio.h>

/// QUESTION 1
/*
#include <math.h>
float absoluteSum1D(int size, float vector[]);
int main()
{
  float vector[10];
  int i, size;
  
  printf("Enter vector size: \n");
  scanf("%d", &size);
  printf("Enter %d data: \n", size);
  for (i=0; i<size; i++)
    scanf("%f", &vector[i]);
  printf("absoluteSum1D(): %.2f", absoluteSum1D(size, vector));   
  return 0;     
}

float absoluteSum1D(int size, float vector[])
{
  float sum = 0;
  for (int i = 0; i < size; i++){
    sum += fabs(vector[i]);
  }
  return sum;
}
*/

/// QUESTION 2
/*
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
  int max1,max2;
  int ar[10],size,i;
  printf("Enter array size: \n");
  scanf("%d", &size);
  printf("Enter %d data: \n", size);
  for (i=0; i<size; i++)
    scanf("%d", &ar[i]);
  find2Max1D(ar,size,&max1,&max2);
  printf("Max1: %d\nMax2: %d\n",max1,max2);
  return 0;
}

void find2Max1D(int ar[], int size, int *max1, int *max2)
{
  int max = ar[0];
  for (int i = 0; i < size; i++){
    if (ar[i] > max) max = ar[i];
  }
  *max1 = max;
  max = ar[0];
  for(int j = 0; j < size; j++){
    if (ar[j] > max && ar[j] < *max1) max = ar[j];
  }
  *max2 = max;
}
*/

/// QUESTION 3
/*
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
  int ar[40];
  int i, size;
  int min, max;
  printf("Enter array size: \n");
  scanf("%d", &size);
  printf("Enter %d data: \n", size);
  for (i=0; i<size; i++)
    scanf("%d", &ar[i]);
  findMinMax1D(ar, size, &min, &max);
  printf("min = %d; max = %d\n", min, max);    
  return 0;               
}

void findMinMax1D(int ar[], int size, int *min, int *max)
{
  *max = ar[0];
  *min = ar[0];
  for (int i = 0; i < size; i++){
    if (ar[i] > *max) *max = ar[i];
    else if (ar[i] < *min) *min = ar[i];
  }
}
*/

/// QUESTION 4
/*
void specialNumbers1D(int ar[], int num, int *size);
int main()  
{
  int a[20],i,size=0,num;
  
  printf("Enter a number (between 100 and 999): \n");
  scanf("%d", &num);
  specialNumbers1D(a, num, &size);
  printf("specialNumbers1D(): ");
  for (i=0; i<size; i++)      
    printf("%d ",a[i]);  
  return 0;
}

void specialNumbers1D(int ar[], int num, int *size)
{
  *size = 0;
  for (int i = 100; i <= num; i++){
    int sum = 0;
    int j = i;
    while (j > 0){
      int a = j % 10;
      sum += a * a * a;
      j = j / 10;
    }    
    if (sum == i){
      *size = *size + 1;    
      ar[*size - 1] = i;
      
    } 
  }
}
*/

/// QUESTION 5
/*
#define SIZE 3
void matVecMult(int M[SIZE][SIZE], int V[SIZE], int R[SIZE]);   

int main()
{
  int A[SIZE][SIZE];
  int V[SIZE], R[SIZE];
  int i,j;        
  
  printf("Enter matrix A (%dx%d): \n", SIZE, SIZE);
  for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
        scanf("%d", &A[i][j]);
  printf("Enter matrix V (%dx1): \n", SIZE);
  for (i=0; i<SIZE; i++)
    scanf("%d", &V[i]);    
  printf("matVecMult (AxV): \n");       
  matVecMult(A, V, R);
  for (i = 0; i < SIZE; i++)  
    printf("%d ", R[i]);
  printf("\n");   
  return 0;
}

void matVecMult(int M[SIZE][SIZE], int V[SIZE], int R[SIZE])    
{
  for (int row = 0; row < 3; row++){
    R[row] = 0;
    for (int col = 0; col < 3; col++){
      R[row] += M[row][col] * V[col];
    }
  }
}
*/

/// QUESTION 6
/*
void findAverage2D(float matrix[4][4]);    
int main()
{
   float ar[4][4];  
   int i,j;       
    
   printf("Enter data: \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++)
         scanf("%f", &ar[i][j]);
   }
   findAverage2D(ar);
   printf("findAverage2D(): \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++)
         printf("%.2f ", ar[i][j]);
      printf("\n");
   }
   return 0;
}
void findAverage2D(float matrix[4][4])
{ 
  float sum;
  for (int i = 0; i < 4; i++){
    sum = 0;
    for (int j = 0; j < 3; j++){
      sum += matrix[i][j];
    }
    matrix[i][3] = sum / 3;
  }
}
*/

/// QUESTION 7
/*
#define SIZE 4
void computeTotal2D(int matrix[SIZE][SIZE]);
int main()
{
  int a[SIZE][SIZE];
  int i,j;           
  printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
  for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
        scanf("%d", &a[i][j]);
  printf("computeTotal2D(): \n");       
  computeTotal2D(a);
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++)
        printf("%d ", a[i][j]);
    printf("\n");
  }      
  return 0;
}

void computeTotal2D(int matrix[SIZE][SIZE])
{
  for (int row = 0; row < SIZE; row++){
    int sum = 0;
    for (int col = 0; col < SIZE - 1; col++){
      sum += matrix[row][col];
    }
    matrix[row][SIZE - 1] = sum;
  }
}
*/

/// QUESTION 8
/*
int platform1D(int ar[], int size);

int main()  
{
  int i,b[50],size;
  printf("Enter array size: \n");
  scanf("%d", &size);
  printf("Enter %d data: \n", size);
  for (i=0; i<size; i++)  
    scanf("%d",&b[i]);
  printf("platform1D(): %d\n", platform1D(b,size));
  return 0;
}

int platform1D(int ar[], int size)
{
  int store; int counter = 0;
  store = ar[0];
  for (int i = 1; i < size; i++){
    if (ar[i] == store){
      counter += 1;
    }
    else{
      store = ar[i];
    } 
  }
  return counter;
}
*/

/// QUESTION 9
/*
void swapMinMax1D(int ar[], int size);
int main()  
{
  int ar[50],i,size;
  
  printf("Enter array size: \n");
  scanf("%d", &size);
  printf("Enter %d data: \n", size);
  for (i=0; i<size; i++)  
    scanf("%d",ar+i);
  swapMinMax1D(ar, size);
  printf("swapMinMax1D(): ");
  for (i=0; i<size; i++)  
    printf("%d ",*(ar+i));  
  return 0;
}

void swapMinMax1D(int ar[], int size)
{
  int max = ar[0]; int min = ar[0]; 
  int max_i, min_i;

  for (int i = 0; i < size; i++){
    if (ar[i] >= max){
      max = ar[i];
      max_i = i;    
    }
    if (ar[i] <= min){
      min = ar[i];
      min_i = i;
    }
  }  
  ar[min_i] = max;
  ar[max_i] = min;  
}
*/

/// QUESTION 10
/*
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2);
int main()
{
  int ar[SIZE][SIZE], rowSize, colSize;
  int i, j, sum1=0, sum2=0;
  
  printf("Enter row size of the 2D array: \n");
  scanf("%d", &rowSize);
  printf("Enter column size of the 2D array: \n");
  scanf("%d", &colSize);
  printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
  for (i=0; i<rowSize; i++)
    for (j=0; j<colSize; j++)
        scanf("%d", &ar[i][j]);
  diagonals2D(ar, rowSize, colSize, &sum1, &sum2);
  printf("sum1=%d; sum2=%d\n",sum1,sum2);
}

void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2)
{
  *sum1 = 0; *sum2 = 0;
  for (int i = 0; i < rowSize; i++){
    for (int j = 0; j < colSize; j++){
      if (i == j){
        *sum1 += ar[i][j]; 
      }
      if (j == rowSize - 1 - i){
        *sum2 += ar[i][j];
      }
    }
  }
}
*/

/// QUESTION 11
/*
#define SIZE 10
#define INIT_VALUE 999
int symmetry2D(int M[][SIZE], int rowSize, int colSize);
int main()  
{
  int M[SIZE][SIZE],i,j, result = INIT_VALUE;
  int rowSize, colSize;
  
  printf("Enter the array size (rowSize, colSize): \n");
  scanf("%d %d", &rowSize, &colSize);  
  printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
  for (i=0; i<rowSize; i++)
    for (j=0; j<colSize; j++)
        scanf("%d", &M[i][j]);     
  result=symmetry2D(M, rowSize, colSize);
  if (result == 1)
    printf("symmetry2D(): Yes\n");
  else if (result == 0)
    printf("symmetry2D(): No\n");  
  else
    printf("Error\n");
  return 0;
}

int symmetry2D(int M[][SIZE], int rowSize, int colSize)  
{
  int total = rowSize * colSize;
  for (int i = 0; i < rowSize; i++){
    for (int j = 0; j < colSize; j++){
      if (M[i][j] == M[j][i]){
        total -= 1;
      }
    }
  }
  if (total == 0) return 1;
  else return 0;
}
*/

/// QUESTION 12
/*
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()  
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;
   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);  
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);      
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)  
{
  for (int i = 0; i < rowSize; i++){
    int counter = 0;
    int store = data[i][0]; //start w/ zero
    for (int j = 0; j < colSize; j++){
      if (data[i][j] == store){ //if same as before
        counter += 1;
      }
      else{
        printf("%d %d ", store, counter);
        counter = 1;
        store = data[i][j]; //if diff, change frist
      }
      if (j == colSize - 1) printf("%d %d ", store, counter);
      
    }
    printf("\n");
  }
}
*/

/// QUESTION 13 
/*
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()  
{
  int ar[SIZE][SIZE], rowSize, colSize;
  int i,j,min;
  
  printf("Enter row size of the 2D array: \n");
  scanf("%d", &rowSize);
  printf("Enter column size of the 2D array: \n");
  scanf("%d", &colSize);
  printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
  for (i=0; i<rowSize; i++)
    for (j=0; j<colSize; j++)
        scanf("%d", &ar[i][j]);
  min=minOfMax2D(ar, rowSize, colSize);
  printf("minOfMax2D(): %d\n", min);
  return 0;
}

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{ 
  int min;
  for (int i = 0; i < rowSize; i++){   
    int max = ar[i][0];
    for (int j = 0; j < colSize; j++){
      if (ar[i][j] > max) max = ar[i][j];
    }   
  if (min == 0){
    min = max;
    }
  if (max <= min){
    min = max;
  }
  }
  return min;
}
*/

/// QUESTION 14 /// HAS PROBLRME
/*
#define MAX 10

void initialize(int *size, int ar[]);
void insert(int max, int *size, int ar[], int num);
void iremove(int *size, int ar[], int num);
void display(int size, int ar[]);
int main()
{
  int  option = 0;
  int  num, ar[MAX], size = 0;
  printf("Please select an option: \n");
  printf("(1) Initialize the array \n");
  printf("(2) Insert an integer \n");
  printf("(3) Remove an integer \n");
  printf("(4) Display the numbers stored in the array \n");
  printf("(5) Quit \n");
  do {
    printf("Enter your choice: \n");
    scanf("%d", &option);
    switch (option) {
        case 1:
          initialize(&size, ar);
          break;             
        case 2:
          printf("Enter an integer: \n");
          scanf("%d", &num);
          insert(MAX, &size, ar, num);
          break;             
        case 3:
          printf("Enter the integer to be removed: \n");
          scanf("%d", &num);
          iremove(&size, ar, num);
          break;           
        case 4:
          display(size, ar);
          break;          
        default:
          break;
    }          
  } while (option < 5);
  return 0;
}

void display(int size, int ar[])  
{
  int i;
  
  if (size != 0) {
    printf("The %d numbers in the array: \n", size);
    for (i = 0; i < size; i++)  
        printf("%d ", ar[i]);
    printf("\n");
  }
  else
    printf("The array is empty\n");
}

void initialize(int *size, int ar[])  
{
  int temp;
  printf("Enter the total number of integers (MAX=10): \n");
  scanf("%d", size);
  printf("Enter the integers: \n");
  for (int i = 0; i < *size; i++){
    scanf("%d", &ar[i]);
  }
  for (int i = 0; i < *size; i++){
    for (int j = 0; j < *size - 1 - i; j++){
      if (ar[j] > ar[j + 1]){
        temp = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = temp;
      }
    }
  }
}


void insert(int max, int *size, int ar[], int num)  
{
  if (*size == max){
    printf("The array is full \n");
  }
  else{
    *size += 1;
    int temp[*size];
    for (int i = *size - 2; i > -1; i--){
      if (num < ar[i]){
        ar[i + 1] = ar[i];
        continue;
      }
      else{
        ar[i + 1] = num;
        break;
      }
    }
  }
}

void iremove(int *size, int ar[], int num)  
{
  if (*size == 0){
    printf("The array is empty\n");
  }
  else{
    int a = 0;
    for (int i = 0; i < *size; i++){
      if (ar[i] == num){
        ar[i] = ar[i + 1];
        a = 1;
        *size = *size - 1;
        break;
      }
    }
    if (a == 1){
      printf("The integer is removed \n");
    }
    else if (a == 0){
      printf("The number is not in the array \n");
    }
  }
}
*/