#include<stdio.h>
int main(){

    int rafia ,shafia , taqia ;
    printf("Enter The age of Rafia : ");
    scanf("%d", &rafia);

    printf("Enter the age of Shafia : ");
    scanf("%d", &shafia);

    printf("Enter the age of Tafia : ");
    scanf("%d", &taqia);

    if ( rafia > shafia){
        if (rafia > taqia){
            printf("Rafia is bigger then Shafia and Taqia");
        }
        else { // taqia > rafia
            printf("Taqia is Bigger Then Rafiq and Shafia");
        }
    }
    else { // shafia > rafia
        if (shafia > taqia){
            printf("Shafia is bIgger then Taqia and Rafia");
        }
        else { // taqia > shafia
            printf("Taqia is Bigger then Rafia and Shafia");
        }
    }
    return 0;
}