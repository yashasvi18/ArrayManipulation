#include<stdio.h>
int main()
{   // all the function calls are included in main
    int choice;
    int i;
    printf("enter the number of data:");
    scanf("%d",&size);
    printf("enter the data :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("the data provided by the user");
    for(int i=0;i<size;i++)
    {
    printf(" %d",data[i]);
     }
    printf("\n");
    printf("enter the choose, what manipulation to perform on provided data: 1)sort\t2)maximum element\t3)minimum element\t4)find mean\t5)find mode\t6)find meadian ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            sorting(data);
            for (int i =0 ;i<size;i++)
        {
             printf("%d",data[i]);
        }
            break;
        case 2:
            sorting(data);
            printf("%d",data[size-1]);
            break;
        case 3:
            sorting(data);
            printf("%d",data[0]);
            break;    
        case 4:
            mean(data);
            break;
        case 5:
            mode(data);
            break;
        case 6:
            median(data);
            break;
        
        default:
            printf("invalid choice");
            break ; 
    }                              
 }
