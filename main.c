#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boy,no,fark,sonno,minboy;
    printf("okul no :\n");
    scanf("%d",&no);
    printf("boyu :\n");
    scanf("%d",&boy);

    sonno = no;
    fark = abs(boy - 150);

    while (no > 0)
    {
    printf("okul no :\n");
    scanf("%d",&no);
    printf("boyu :\n");
    scanf("%d",&boy);

    if (abs(boy - 150) < fark)
    {
        fark = abs(boy - 150);
        sonno =no;
        minboy = boy;
    }
    }
    printf("%d nolu ki�i %d boyuyla 150 ye en yakindir",sonno,minboy);
    return 0;
}
