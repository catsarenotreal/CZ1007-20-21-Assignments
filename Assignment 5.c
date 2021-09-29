#include <stdio.h>
#include <string.h>

/// QUESTION 1
/*
typedef struct {
  char name[20];  
  int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()  
{
  Person man[3], middle;    
  readData(man);
  middle = findMiddleAge(man);
  printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
  return 0;
}

void readData(Person *p)  
{
  printf("Enter person 1: \n");
  scanf("%s %d", p[0].name, &p[0].age);
  printf("Enter person 2: \n");
  scanf("%s %d", p[1].name, &p[1].age);
  printf("Enter person 3: \n");
  scanf("%s %d", p[2].name, &p[2].age);
}

Person findMiddleAge(Person *p)  
{
  int max = p[0].age;
  int min = p[0].age;
  for (int i = 0; i < 3; i++){
    if (max >= p[i].age) max = p[i].age;
    if (min <= p[i].age) min = p[i].age;
    }
  for (int i = 0; i < 3; i++){
    if (p[i].age != max && p[i].age != min) return p[i];
  }  
}
*/

/// QUESTION 2
/*
#include <math.h>
typedef struct {
  double real;
  double imag;
} Complex;
Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex div(Complex *c1, Complex *c2);
int main()
{
  int choice;
  Complex input1, input2, result;
  
  printf("Complex number operations: \n");
  printf("1 ‐ addition \n");     
  printf("2 ‐ subtraction \n");
  printf("3 ‐ multiplication \n");
  printf("4 ‐ division \n");
  printf("5 ‐ quit \n");
  do {          
    printf("Enter your choice: \n");    
    scanf("%d", &choice);
    if (choice == 5)  
        return 0;            
    printf("Enter Complex Number 1: \n");
    scanf("%lf %lf", &input1.real, &input1.imag);
    printf("Enter Complex Number 2: \n");
    scanf("%lf %lf", &input2.real, &input2.imag);  
    switch (choice) {     
        case 1: result = add(input1, input2);
          break;
        case 2: result = sub(&input1, &input2);
          break;
        case 3: result = mul(input1, input2);
          break;
        case 4: result = div(&input1, &input2);
          break;
    }
    printf("complex(): real %.2f imag %.2f\n",  
            result.real, result.imag);  
  } while (choice<5);
  return 0;
}

Complex add(Complex c1, Complex c2)
{
  Complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}

Complex sub(Complex *c1, Complex *c2)
{
  Complex result;
  result.real = c1->real - c2->real;
  result.imag = c1->imag - c2->imag;
  return result;
}

Complex mul(Complex c1, Complex c2)
{
  Complex result;
  result.real = c1.real * c2.real - c1.imag * c2.imag;
  result.imag = c1.real * c2.imag + c1.imag * c2.real;
  return result;
}

Complex div(Complex *c1, Complex *c2)
{
  Complex result;
  result.real = (c1->real * c2->real + c1->imag * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2));
  result.imag = (c1->imag * c2->real - c1->real * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2));
  return result;
}
*/

/// QUESTION 3
/*
#include <math.h>
typedef struct {
  double x;
  double y;
} Point;
typedef struct {
  Point topLeft;    
  Point botRight;   
} Rectangle;
void getRect(Rectangle *r);
void printRect(Rectangle r);
double findArea(Rectangle r);
int main()
{
  Rectangle r;
  int choice;
  printf("Select one of the following options:\n");
  printf("1: getRect()\n");      
  printf("2: findArea()\n");
  printf("3: printRect()\n");       
  printf("4: exit()\n");     
  do {
    printf("Enter your choice: \n");
    scanf("%d", &choice);   
    switch (choice) {
        case 1:            
          printf("getRect(): \n");
          getRect(&r);            
          break;                
        case 2:
          printf("findArea(): %.2f\n", findArea(r));             
          break;                              
        case 3:
          printf("printRect(): \n");             
          printRect(r);               
          break;                              
        default:  
          break;
    }  
  } while (choice < 4);
  return 0;
}

void getRect(Rectangle *r)
{
  printf("Enter top left point: \n");
  scanf("%lf %lf", &r->topLeft.x, &r->topLeft.y);
  printf("Enter bottom right point: \n");
  scanf("%lf %lf", &r->botRight.x, &r->botRight.y);
}

void printRect(Rectangle r)
{
  printf("Top left point: %.2lf %.2lf \n", r.topLeft.x, r.topLeft.y);
  printf("Bottom right point: %.2lf %.2lf \n", r.botRight.x, r.botRight.y);
}

double findArea(Rectangle r)
{
  double lenh = r.topLeft.x - r.botRight.x;
  double lenv = r.topLeft.y - r.botRight.y;
  double area = fabs(lenh * lenv);
  return area;
}
*/


/// QUESTION 4 
/*
typedef struct {
 char source;
 char code;
} Rule;

void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);
int main()
{
  char s[80], t[80], dummychar, *p;
  int size, choice;
  Rule table[100];

  printf("Select one of the following options:\n");
  printf("1: createTable()\n");
  printf("2: printTable()\n");
  printf("3: encodeChar()\n");
  printf("4: exit()\n");
  do {
  printf("Enter your choice: \n");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
  printf("createTable(): \n");
  createTable(table, &size);
  break;
  case 2: 
  printf("printTable(): \n");
  printTable(table, size);
  break;
  case 3:
  scanf("%c",&dummychar);
  printf("Source string: \n");
  fgets(s, 80, stdin);
  if (p=strchr(s,'\n')) *p = '\0';
  encodeChar(table,size,s,t);
  printf("Encoded string: %s\n", t);
  break;
  default:
  break;
  }
  } while (choice < 4);
  return 0;
  }

  void printTable(Rule *table, int size)
  {
  int i;
  for (i=0; i<size; i++)
  {
  printf("%d: %c->%c\n", i+1, table->source, table->code);
  table++;
 }
}

void createTable(Rule *table, int *size)
{
  printf("Enter number of rules: \n");
  scanf("%d", size);
  for (int i = 1; i < *size + 1; i++){
    printf("Enter rule %d: \n", i);
    printf("Enter source character: \n");
    scanf("%s", &table[i - 1].source);
    printf("Enter code character: \n");
    scanf("%s", &table[i - 1].code);
  }
}

void encodeChar(Rule *table, int size, char *s, char *t)
{
  for (int i = 0; i < strlen(s); i++){
    for (int j = 0; j < size; j++){
      if (table[j].source == s[i]){
        t[i] = table[j].code; break;
      }
      else if (j == size - 1 && table[j].source != s[i]){
        t[i] = s[i]; 
      }
      else continue;
    }
    t[strlen(s)] = '\0';
  }

}
*/

/// QUESTION 5
/*
#define SIZE 50
typedef struct {
  int id;
  char name[50];
} Student;
void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);
int main()  
{
  Student s[SIZE];
  int size=0, choice;
  char target[80], *p;
  int result;
  
  printf("Select one of the following options: \n");
  printf("1: inputStud()\n");      
  printf("2: removeStud()\n");
  printf("3: printStud()\n");
  printf("4: exit()\n");       
  do {
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:            
          printf("Enter size: \n");
          scanf("%d", &size);
          printf("Enter %d students: \n", size);    
          inputStud(s, size);  
          break;
        case 2:  
          printf("Enter name to be removed: \n");
          scanf("\n");
          fgets(target, 80, stdin);   
          if (p=strchr(target,'\n')) *p = '\0';  
          printf("removeStud(): ");
          result = removeStud(s, &size, target);         
          if (result == 0)  
              printf("Successfully removed\n");
          else if (result == 1)
              printf("Array is empty\n");
          else if (result == 2)
              printf("The target does not exist\n");
          else
              printf("An error has occurred\n");         
          break;
        case 3:  
          printStud(s, size);
          break;          
    }
  } while (choice < 4);
  return 0;
}

void inputStud(Student *s, int size)  
{ 
  for (int i = 0; i < size; i++){
    printf("Student ID: \n");
    scanf("%d", &s[i].id);
    printf("Student name: \n");
    scanf("\n");
    fgets(s[i].name, 50, stdin);
    char *p;
    if (p=strchr(s[i].name,'\n')) *p = '\0';    
  } 
}

void printStud(Student *s, int size)  
{
  printf("The current student list: \n");
  for (int i = 0; i < size; i++){
    printf("Student ID: %d Student Name: %s \n", s[i].id, s[i].name);    
  }
}

int removeStud(Student *s, int *size, char *target)  
{
  int sizecheck = *size;
  for (int i = 0; i < *size; i++){
    if (*target == *s[i].name){
      for (int j = i; j < *size - 1; j++){
        s[j] = s[j + 1];        
      }   
      *size = *size - 1;    
      return 0;
    }
  }
  if (sizecheck == *size) return 2;
  else if (*size == 0) return 1;
  
}
*/

/// QUESTION 6
/*
struct account {
  struct
  {
  char lastName[10];
  char firstName[10];
  } names;
  int accountNum;
  double balance;
};
void nextCustomer(struct account *acct);
void printCustomer(struct account acct);
int main()
{
  struct account record;
  int flag = 0;
  do {
  nextCustomer(&record);
  if ((strcmp(record.names.firstName, "End") == 0) &&
  (strcmp(record.names.lastName, "Customer") == 0))
  flag = 1;
  if (flag != 1)
  printCustomer(record);
  } while (flag != 1);
}

void nextCustomer(struct account *acct)
{
  puts("Enter names (firstName lastName): ");
  scanf("%s %s", acct->names.firstName, acct->names.lastName);
  char dummychar;
  scanf("%c", &dummychar);


  if (strcmp(acct->names.lastName, "Customer") != 0 && strcmp(acct->names.firstName, "End") != 0){
    puts("Enter account number: ");
    scanf("%d", &acct->accountNum);    
    puts("Enter balance: ");
    scanf("%lf", &acct->balance);
  }

  else if ((strcmp(acct->names.lastName, "Customer") != 0 && strcmp(acct->names.firstName, "End") == 0) || (strcmp(acct->names.lastName, "Customer") == 0 && strcmp(acct->names.firstName, "End") != 0)){
    puts("Enter account number: ");
    scanf("%d", &acct->accountNum);    
    puts("Enter balance: ");
    scanf("%lf", &acct->balance);
  }

  else{
    ;
  }

}

void printCustomer(struct account acct)
{
  printf("Customer record:\n%s %s %d %.2lf\n", acct.names.firstName, acct.names.lastName, acct.accountNum, acct.balance);
} 
*/

/// QUESTION 7
/*
#define MAX 100
typedef struct {
  char name[40];
  char telno[40];
  int id;
  double salary;
} Employee;
void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);
int main()
{
  Employee emp[MAX];
  char name[40], *p;
  int size, choice, result;
  
  printf("Select one of the following options: \n");
  printf("1: readin() \n");      
  printf("2: search() \n");
  printf("3: addEmployee() \n");
  printf("4: print() \n");
  printf("5: exit() \n");       
  do {
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:            
          size = readin(emp);         
          break;                
        case 2:            
          printf("Enter search name: \n");
          scanf("\n");
          fgets(name, 40, stdin);   
          if (p=strchr(name,'\n')) *p = '\0';
          result = search(emp,size,name);    
          if (result != 1)  
              printf ("Name not found! \n");      
          break;                
        case 3:            
          printf("Enter new name: \n");
          scanf("\n");
          fgets(name, 40, stdin);   
          if (p=strchr(name,'\n')) *p = '\0';
          result = search(emp,size,name);   
          if (result != 1)
              size = addEmployee(emp, size, name);      
          else  
              printf("The new name has already existed in the database\n");
          break;          
        case 4:
          printEmp(emp, size);
          break;
        default:  
          break;
    }  
  } while (choice < 5);
  return 0;
}

void printEmp(Employee *emp, int size)  
{
  int i;
  
  printf("The current employee list: \n");
  if (size==0)  
    printf("Empty array\n");
  else
  {
    for (i=0; i<size; i++)  
        printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id,
  emp[i].salary);  
  }
}

int readin(Employee *emp)
{
  int size = 0;
  while(1){
    char *p;
    printf("Enter name: \n");
    scanf("\n");
    fgets(emp[size].name, 40, stdin);     
    if (p=strchr(emp[size].name,'\n')) *p = '\0';
    if (strcmp(emp[size].name, "#") == 0){    
      break; 
    }
    printf("Enter tel: \n");
    scanf("%s", emp[size].telno);
    printf("Enter id: \n");
    scanf("%d", &emp[size].id);
    printf("Enter salary: \n");
    scanf("%lf", &emp[size].salary);
    puts(emp[size].name);
    size = size + 1;
  }
  return size;
}

int search(Employee *emp, int size, char *target)
{
  int counter = 0;
  for (int i = 0; i < size; i++){
    if (strcmp(target, emp[i].name) == 0){
      printf("Employee found at index location: %d \n", i);
      return 1;
    }
    counter++;
  }
  if (counter == size) return 0;
}

int addEmployee(Employee *emp, int size, char *target)
{
  if (size == 100) { printf("Database is full"); }
  else{
    char *p;
    strcpy(emp[size].name, target);
    printf("Enter tel: \n");
    scanf("%s", emp[size].telno);
    printf("Enter id: \n");
    scanf("%d", &emp[size].id);
    printf("Enter salary: \n");
    scanf("%lf", &emp[size].salary);    
    size = size + 1;
    printf("Added at position: %d \n", size);
  }
  return size;
}
*/


/// QUESTION 8
/*
#define MAXCAP 5   
#define TAKEN 1
#define EMPTY 0
typedef struct {
  char name[20];
  int ID;
  int status;  
} Seat;
void listTakenSeat(Seat plane[]);
void assignSeat(Seat plane[]);
void removeSeat(Seat plane[]);
int main()
{
  Seat plane[MAXCAP];
  int choice, i;
  for (i=0; i<MAXCAP; i++)
    plane[i].status = EMPTY;
  printf("NTU AIRLINES SEATING RESERVATION PROGRAM: \n");
  printf("1: listTakenSeat()\n");
  printf("2: assignSeat()\n");
  printf("3: removeSeat()\n");
  printf("4: quit\n");
  do {    
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: listTakenSeat(plane);
          break;   
        case 2: assignSeat(plane);
          break;   
        case 3: removeSeat(plane);
          break;    
    }    
  } while (choice < 4);   
  return 0;
}

void listTakenSeat(Seat plane[])
{
  int counter = 0;
  for (int i = 0; i < 5; i++){
    plane[i].ID = i + 1;
  }
  for (int i = 0; i < 5; i++){
    if (plane[i].status == TAKEN){
      printf("Customer name: %s \n", plane[i].name);
      printf("Seat number (ID): %d \n", plane[i].ID);
    }
    else counter++;
  }
  if (counter == 5) printf("Empty list \n");
}

void assignSeat(Seat plane[])
{
  for (int i = 0; i < 5; i++){
    plane[i].ID = i + 1;
  }
  int counter = 0;
  for (int i = 0; i < 5; i++){
    if (plane[i].status == TAKEN){
      counter++;
    }
  }
  if (counter == 5) printf("The plane is full \n");
  else{    
    int temp;
    printf("Enter the seat number: \n");
    scanf("%d", &temp); 
    if (temp < 1 || temp > 5){
      printf("Please enter a seat number between 1 and 5 \n");
    }
    else{
      if (plane[temp - 1].status == TAKEN){
        printf("Occupied! Please choose another seat \n");
      }
      else if (plane[temp - 1].status == EMPTY){
        printf("Enter customer name: \n");
        char *p; 
        scanf("\n");
        fgets(plane[temp - 1].name, 20, stdin);     
        if (p=strchr(plane[temp - 1].name,'\n')) *p = '\0';
        plane[temp - 1].status = TAKEN;
        printf("The seat has been assigned successfully \n");
      }
    }
  } 
}

void removeSeat(Seat plane[])  // this doesn't pass test 5 but in my defence his fucking document is not clear about it at all
{
  for (int i = 0; i < 5; i++){
    plane[i].ID = i + 1;
  }
  int counter = 0;
  for (int i = 0; i < 5; i++){
    if (plane[i].status == EMPTY){
      counter++;
    }
  }
  if (counter == 5) {printf("All the seats are vacant \n");}
  else{
    int temp; 
    printf("Enter the seat number: \n");
    while (1){
      scanf("%d", &temp);
      if (temp < 1 || temp > 5){
        printf("Please enter a seat number between 1 and 5 \n");
        break;
      }
      else if (plane[temp - 1].status == EMPTY){
          printf("Empty! Enter another seat number for removal \n");
        }
      else if (plane[temp - 1].status == TAKEN){
        plane[temp - 1].status = EMPTY; 
        printf("Removal is successful \n");
        break;
      }  
    }    
  }    
}

*/

/// QUESTION 9
/*
#include <ctype.h>
#define MAX 5
#define TAKEN 1
#define EMPTY 0
typedef struct  
{
  int ID;
  int status;  
  char customerName[20];
} Room;

void listOccupiedRooms(Room hotel[]);
void assignRoom(Room hotel[]);
void removeRoom(Room hotel[]);
void findCustomer(Room hotel[], char *target);

int main()  
{
  Room hotel[MAX];
  int choice, i, numEmpty;
  char target[20], dummychar;
    
  for (i=0; i<MAX; i++)
    hotel[i].status = EMPTY;
      
  printf("NTU HOTEL ROOM RESERVATION PROGRAM: \n");
  printf("1: listOccupiedRooms() \n");
  printf("2: assignRoom() \n");
  printf("3: removeRoom() \n");
  printf("4: findCustomer() \n");
  printf("5: quit\n");
  do {     
    printf("Enter your choice:\n");
    scanf("%d", &choice);       
    switch(choice) {
        case 1:
          printf("listOccupiedRooms(): \n");
          listOccupiedRooms(hotel);
          break;
        case 2:           
          assignRoom(hotel);
          break;
        case 3:
          removeRoom(hotel);
          break;
        case 4:
          scanf("%c", &dummychar);
          printf("Enter customerName: \n");
          gets(target);
          findCustomer(hotel, target);
          break;
        default:
          break;
    }
  } while (choice<5);
  return 0;
}

void listOccupiedRooms(Room hotel[])  
{
  int i, emptylist=0;
  for (i=0; i<MAX; i++) {
    if (hotel[i].status == TAKEN){
      printf("roomID: ");
      printf("%d\n", i+1);
      printf("customer name: ");
      printf("%s\n", hotel[i].customerName);   
      emptylist=1;         
    }
  }
  if (emptylist == 0)
    printf("The hotel is empty\n");
}

void assignRoom(Room hotel[])
{
  for (int i = 0; i < 5; i++){
    hotel[i].ID = i + 1;
  }
  int counter = 0;
  for (int j = 0; j < 5; j++){
    if (hotel[j].status == TAKEN){
      counter++;
    }
  } 
  if (counter == 5) { printf("The hotel is full \n"); }
  else{
    int id;
    printf("Enter a roomID between 1 and 5: \n");
    while (1){
      scanf("%d", &id);
      if (hotel[id - 1].status == TAKEN) printf("Occupied! Enter another roomID \n");
      else if (id < 1 || id > 5) printf("Enter a roomID between 1 and 5: \n");
      else if (hotel[id - 1].status == EMPTY){
        printf("Enter customer name: \n");
        char *p; 
        scanf("\n");
        fgets(hotel[id - 1].customerName, 20, stdin);     
        if (p=strchr(hotel[id - 1].customerName,'\n')) *p = '\0';
        hotel[id - 1].status = TAKEN; 
        printf("The room has been assigned successfully \n");
        break;
      } 
    }
  }
}

void removeRoom(Room hotel[])
{
  for (int i = 0; i < 5; i++){
    hotel[i].ID = i + 1;
  }
  int counter = 0;
  for (int j = 0; j < 5; j++){
    if (hotel[j].status == EMPTY){
      counter++;
    }
  } 
  if (counter == 5) { printf("All the rooms are empty \n"); }

  else{
    printf("Enter a roomID between 1 and 5 \n");
    while (1){
      int id;
      scanf("%d", &id);
      if (id < 1 || id > 5){
        printf("Enter a room number between 1 and 5 \n");
      }
      else if (hotel[id - 1].status == EMPTY){
        printf("Empty! Enter another roomID for removal \n");
      }
      else if (hotel[id - 1].status == TAKEN){
        hotel[id - 1].status = EMPTY;
        printf("Removal is successful\n");
        break;
      }
    }
  }
}

void findCustomer(Room hotel[], char *target)
{
  int counter = 0;
  char this_bs[20];

  int k = 0;
  while (target[k]){
    this_bs[k] = toupper(target[k]);
    k++;
  }
  this_bs[k+1] = '\0';

  for (int i = 0; i < 5; i++){

    char fuck[20]; 

    int j = 0;
    while ((hotel[i].customerName)[j]){
      fuck[j] = toupper((hotel[i].customerName)[j]);
      j++;
    }

    fuck[j] = '\0'; 

    if (strcmp(fuck, this_bs) == 0) {
      printf("The target customer name is found \n");
      printf("roomID: %d \n", hotel[i].ID);
      printf("customer name: %s \n", hotel[i].customerName);
    }
    else{
      counter++;
    }
  }

  if (counter == 5){
    printf("The target customer name is not found \n");
  }
} 