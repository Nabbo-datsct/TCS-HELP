/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int n;
    float first=-111111, second=-111111, third=-111111;
     printf("Enter number of participants\n");
     scanf("%d", &n);
    printf("Enter kms covered\n");
    float x;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x);
        if(x<42.195)
        {
            if(x>first)
            {
                third=second;
                second=first;
                first=x;
            }
            else if(x>second)
            {
                third=second;
                second=x;
            }
            else if(x>third)
            {
                third=x;
            }
        }
        
    }
    if(first!=-111111)
    {
        printf("%f,", first);
        if(second!=-111111)
        {
            printf("%f,", second);
            if(third!=-111111)
            printf("%f", third);
            
        }
        
    }
    else
    printf("No unfinished participants");
    
    

    
    
}

    

