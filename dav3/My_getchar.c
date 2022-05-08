#include <stdio.h>
#include <stdlib.h>

int my_getchar()
{
    int c;
    
    if((c = getchar()) == EOF )
    {
        
        if(ferror(stdin))
        {
            perror("error indicator on");
            exit(1);
        }
        
        if(feof(stdin))
        {
            perror("End of file on");
            exit(2);
        }
        
        perror("another error");
        exit(3);
    }
    
    return c;
}
