#include<stdio.h>

struct employees{
	int id;
   char name[50];
    int age;
   char role[50];
   char city[50];
    int exper;
   char com_name[50]; 
};

int main(){

	int n;
	int i;
	printf("Enter employee size: ");
    scanf("%d",&n);
    
    
	struct employees emp[n];
    printf("Enter %d Employee Details:\n",n);
    for(i=0;i<n;i++){
        printf("Employee %d:- \n",i+1);

        printf("Enter employee id: ");
        scanf("%d",&emp[i].id);
        printf("Enter employee name: ");
        scanf("%s",&emp[i].name);
        printf("Enter employee age: ");
        scanf("%d",&emp[i].age);
        printf("Enter employee role: ");
        scanf("%s",&emp[i].role);
        printf("Enter employee city: ");
        scanf("%s",&emp[i].city);
        printf("Enter employee experience(year): ");
        scanf("%d",&emp[i].exper);
        printf("Enter employee compony name: ");
        scanf("%s",&emp[i].com_name);
		
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<n; i++){
        printf("Employees id: %d \n",emp[i].id);
        printf("Employees name: %s \n",emp[i].name);
        printf("Employees age: %d \n",emp[i].age);
        printf("Employees role: %s \n",emp[i].role);
        printf("Employees city: %s \n",emp[i].city);
        printf("Employees experience(year): %d \n",emp[i].exper);
        printf("Employees compony name: %s \n\n\n",emp[i].com_name);
    }
 
}
