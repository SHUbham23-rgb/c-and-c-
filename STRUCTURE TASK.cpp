#include <stdio.h>

struct employee{

    char name[30];
    int id;
    int salary;

};

int main()
{
    int i, n=4;

  struct  employee e [n];

    //Taking each employee detail as input

    printf("Enter %d Employee Details \n \n",n+1);
    for(i=0; i<=n; i++){

        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",e[i].name);
        //ID
        printf("Id: ");
        scanf("%d",&e[i].id);
        //Salary
        printf("Salary: ");
        scanf("%d",&e[i].salary);

        printf("\n");
    }

    //Displaying Employee details
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("--------------------------------------------------------- All Employees Details ---------------------------------------------------------------------------------\n");

     printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<=n; i++){

        printf("Name \t: ");
        printf("%s \n",e[i].name);

        printf("Id \t: ");
        printf("%d \n",e[i].id);

        printf("Salary \t: ");
        printf("%d \n",e[i].salary);

        printf("\n");
    }

    return 0;

}
