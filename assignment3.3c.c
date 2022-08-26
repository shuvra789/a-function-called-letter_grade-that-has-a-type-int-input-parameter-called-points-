#include <stdio.h>
#include <unistd.h>
#include<string.h>
typedef int bool;
#define true 1
#define false 0

void letter_grade(int points, char *gradep, bool *just_missedp)
{
    if(points>=90 && points<=100)
        *gradep =  'A';

    else if(points>=80 && points<=89)
        *gradep = 'B';

    else if(points>=70 && points<=79)
        *gradep = 'C';

    else if(points>=60 && points<=69)
        *gradep = 'D';

    else if(points>=50 && points<=59)
        *gradep = 'E';

    else if(points>=40 && points<=49)
        *gradep = 'F';

    else if(points>=30 && points<=39)
        *gradep = 'G';

    else if(points>=20 && points<=29)
        *gradep = 'H';

    else if(points>=10 && points<=19)
        *gradep = 'I';

    else
        *gradep = 'J';

    if((points + 1) != 100 && (points + 1)%10 == 0)
        *just_missedp = true;
    else
        *just_missedp = false;
}
int main(int argc, char * argv[])
{

    int points;
    char gradep;
    bool just_missedp;
    printf("Input points: ");
    scanf("%d", &points);

    letter_grade(points, &gradep, &just_missedp);

    printf("\n\nSo, Grade is: %c", gradep);

    if(just_missedp)
        printf("\n\nJust missed next higher grade\n");

    return 0;
}
