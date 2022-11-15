#include <stdio.h>
int main()
{
    int week;
    int time;
    printf("Type the day in number (1-7) and time of interest: ");
    scanf("%d%d", &week, &time);

    if(week == 1 & time <= 07.00 & time <= 19.00){printf("Lectures\n");}
    else if (week == 1 & time <= 19.01 & time <= 30.30){printf("Rest\n");}
    else if (week == 1 & time <= 21.31 & time <= 23.00){printf("Study\n");}
    else if (week == 1 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if (week == 2 & time <= 07.00 & time <= 19.00){printf("Lectures\n");}
    else if (week == 2 & time <= 19.01 & time <= 30.30){printf("Rest\n");}
    else if (week == 2 & time <= 21.31 & time <= 23.00){printf("Assignments/ Study\n");}
    else if (week == 2 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if (week == 3 & time <= 07.00 & time <= 19.00){printf("Lectures\n");}
    else if (week == 3 & time <= 19.01 & time <= 30.30){printf("Rest\n");}
    else if (week == 3 & time <= 21.31 & time <= 23.00){printf("Assignments/ Study\n");}
    else if (week == 3 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if (week == 4 & time <= 07.00 & time <= 19.00){printf("Lectures\n");}
    else if (week == 4 & time <= 19.01 & time <= 30.30){printf("Rest\n");}
    else if (week == 4 & time <= 21.31 & time <= 23.00){printf("Assignments/ Study\n");}
    else if (week == 4 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if (week == 5 & time <= 07.00 & time <= 19.00){printf("Lectures\n");}
    else if (week == 5 & time <= 19.01 & time <= 30.30){printf("Rest\n");}
    else if (week == 5 & time <= 21.31 & time <= 23.00){printf("Assignments/ Study\n");}
    else if (week == 5 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if (week == 6 & time <= 07.00 & time <= 10.00){printf("Washing clothes, tidy room\n");}
    else if (week == 6 & time <= 10.01 & time <= 14.00){printf("Outing\n");}
    else if (week == 6 & time <= 14.01 & time <= 21.30){printf("Rest\n");}
    else if (week == 6 & time <= 21.31 & time <= 23.00){printf("Assignments/ Study\n");}
    else if (week == 6 & time <= 23.01 & time <= 05.00){printf("Sleep\n");}

    else if(week == 7 & time <= 07.00 & time <= 10.00){printf("Washing clothes, tidy room\n");}
    else if(week == 7 & time <= 10.00 & time <= 23.00){printf("Assignments/ Study/ Rest\n");}

    else{printf("Nothing to do");}

}