#include<stdio.h>

struct students{
	int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int standard;
    char school[50];
};

int main(){
	struct students s1;
    printf("student 1:\n");
	printf("Enter s1 id: ");
	scanf("%d",&s1.id);
	printf("Enter s1 name: ");
	scanf("%s",&s1.name);
	printf("Enter s1 age: ");
	scanf("%d",&s1.age);
	printf("Enter s1 course: ");
	scanf("%s",&s1.course);
	printf("Enter s1 city: ");
	scanf("%s",&s1.city);
	printf("Enter s1 standard: ");
	scanf("%d",&s1.standard);
	printf("Enter s1 school: ");
	scanf("%s",&s1.school);
  	
  printf("\ns1 records:\n");
  printf(" %d\n %s\n %d\n %s\n %s\n %d\n %s\n",s1.id,s1.name,s1.age,s1.course,s1.city,s1.standard,s1.school);
  
  	struct students s2;
    printf("\n\nStudent 2:\n");
	printf("Enter s2 id: ");
	scanf("%d",&s2.id);
	printf("Enter s2 name: ");
	scanf("%s",&s2.name);
	printf("Enter s2 age: ");
	scanf("%d",&s2.age);
	printf("Enter s2 course: ");
	scanf("%s",&s2.course);
	printf("Enter s2 city: ");
	scanf("%s",&s2.city);
	printf("Enter s2 standard: ");
	scanf("%d",&s2.standard);
	printf("Enter s2 school: ");
	scanf("%s",&s2.school);
  	
  printf("\ns2 records:\n");
  printf(" %d\n %s\n %d\n %s\n %s\n %d\n %s\n",s2.id,s2.name,s2.age,s2.course,s2.city,s2.standard,s2.school);
  
  
  	struct students s3;
    printf("\n\nStudent 3:\n");
	printf("Enter s3 id: ");
	scanf("%d",&s3.id);
	printf("Enter s3 name: ");
	scanf("%s",&s3.name);
	printf("Enter s3 age: ");
	scanf("%d",&s3.age);
	printf("Enter s3 course: ");
	scanf("%s",&s3.course);
	printf("Enter s3 city: ");
	scanf("%s",&s3.city);
	printf("Enter s3 standard: ");
	scanf("%d",&s3.standard);
	printf("Enter s3 school: ");
	scanf("%s",&s3.school);
  	
  printf("\ns3 records:\n");
  printf(" %d\n %s\n %d\n %s\n %s\n %d\n %s\n",s3.id,s3.name,s3.age,s3.course,s3.city,s3.standard,s3.school);
  
  return 0;
}    
    
    
    
