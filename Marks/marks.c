#include<stdio.h>
#include"report.h"
int main()
{  
        int p,c,m,e;
        printf("Marks for Physics Chemistry Maths and English are:\n");
        scanf("%d %d %d %d",&p,&m,&c,&e);
        printf(" grade in PHYSICS\n", phy(p));
        printf(" grade in CHEMISTRY\n", chem(c));
        printf(" grade in MATH\n", math(m));
        printf(" grade in ENGLISH\n", eng(e));
        printf("\n");
        printf("GRADE SYSTEM\n");
        printf("\n");
        printf("grade\tmark\nO\t91-100\nA\t81-90\nB\t71-80\nC\t61-70\nD\t51-60\nE\t34-50\nFAIL\t0-33");
       return 0;
}
