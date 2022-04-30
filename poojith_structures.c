#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char name[40];
	int id;
	int phone_number;
	double salary;
}Employee;

int main()
{
	//number of employees
	int n;
	int i;
	char name;
	long id;
	long phone_number;
	double salary;
	printf("Enter the number of Employees = ");
	scanf("%d",&n);
	
	//array to store structure values of all employees
	Employee employees[n];

//taking each employee details from the user
printf("Enter %d employee details \n",n);
	for (int i=0; i<=n; i++);
	{
		printf("Employee %d: \n",i+1);
		
		//Name
		printf("Name: ");
		scanf("%c",&name);
		
		//Id
		printf("ID: ");
		scanf("%ld",&id);
		
		//phonenumber
		printf("Phone Number: ");
		scanf("%ld",&phone_number);
		
		//salary
		printf("Salary: ");
		scanf("%lf",&salary);
		
	
		
	}
	return 0;
}