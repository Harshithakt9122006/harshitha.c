#include<stdio.h>
   struct Address{
       char city[30];
       int pin;
   };
          struct Employee{
          char name[30];
          struct Address address;
          };
   int main() {
          struct Employee employee;
       printf("Enter employee name:");
       scanf("%s",employee.name);
       printf("Enter city:");
       scanf("%s",employee.address.city);
       printf("Enter pin:");
       scanf("%d",&employee.address.pin);
       printf("\nEmployee details:\n");
       printf("Name:%s\n",employee.name);
       printf("city:%s\n",employee.address.city);
       printf("pin:%d\n",employee.address.pin);
       return 0;
   }
