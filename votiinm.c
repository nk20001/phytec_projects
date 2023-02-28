#include<stdio.h>
#define CANDIDATE_COUNT
#define candidate1"Narendra Modi"
#define candidate2"Rahul Gandhi"
#define candidate3"Arvind Kejriwal"
#define candidate4"Donald Trumph"


int votes1=0;
int votes2=0;
int votes3=0;
int votes4=0;
int spoiledtvotes=0;

void castVote(){
int choice;    
printf("\n\n  Please choose your Candidate \n\n");
printf("\n 1. %s", candidate1);
printf("\n 2. %s", candidate2);
printf("\n 3. %s", candidate3);
printf("\n 4. %s", candidate4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votes1++; break;
    case 2: votes2++; break;
    case 3: votes3++; break;
    case 4: votes4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}




void votesC(){
printf("\n\n Voting Statics ");
printf("\n %s - %d ", candidate1, votes1);
printf("\n %s - %d ", candidate2, votes2);
printf("\n %s - %d ", candidate3, votes3);
printf("\n %s - %d ", candidate4, votes4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void LeadingCandidate(){
    printf("\n\n  Leading Candidate \n\n");
    if(votes1>votes2 && votes1>votes3 && votes1 >votes4)
    printf("[%s]",candidate1);
    else if (votes2>votes3 && votes2>votes4 && votes2 >votes1)
    printf("[%s]",candidate2);
    else if(votes3>votes4 && votes3>votes2 && votes3 >votes1)
    printf("3[%s]",candidate3);
    else if(votes4>votes1 && votes4>votes2 && votes4 >votes3)
    printf("[%s]",candidate4);
    else
    printf("Warning !!! No-win situation");    
    
    
    
}

int main()
{

int choice;

do{
printf("\n\n Welcome to Election/Voting 2023");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesC();break;
case 3: LeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);


getchar();

return 0;
}