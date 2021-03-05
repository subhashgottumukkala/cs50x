#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask Question
    char a = get_char("Do you agree to USA? (y/n)");
    
    //Get an Answer
    if (a == 'y' || a == 'Y')
    printf("Agreed\n");
    else if (a == 'n' || a == 'N')
    printf("Not Agreed\n");
}