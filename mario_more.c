#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int h;
    do
        //Get input
    {
        h = get_int("Height: ");
    }
    //User's input has to be less than 9
    while (h < 1 || h > 8);
    
    for (int i = 0; i < h; i++)
    {
        for (int j = -1; j < i; j++)
            //(h- i>j+ 1)
        {
            printf("#");
        }    
    
        printf("\n");
    }

    int e;
    do
        //Get input
    {
        e = get_int("Height: ");
    }
    //User's input has to be less than 9
    while (e < 1 || e > 8);

    for (int k = 0; k < e; k++)
    {    
        for (int l = e - 1; l > k; l--)
        {
            printf(".");
        }
           
        for (int s = -1; s < k; s++)
        {
            printf("#");  
        }
    
        printf("\n");
    }
    

}
