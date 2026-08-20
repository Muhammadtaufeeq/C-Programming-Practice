// #include<stdio.h>
// int main()
// {
//     int cp;
//     printf("Enter a cost price : ");
//     scanf("%d", &cp);

//     int sp;
//     printf("Ener a selling price : ");
//     scanf("%d", &sp);

//     if(cp<sp){ 
        
         
//          printf("profit ");

//     }
//     if(sp<cp){
        
//         printf("Loss");

//     }
//     if(sp==cp){

//          printf("Neither Loss but Nor profit");
//     }

//     return 0;

// }
#include<stdio.h>
int main(){

    float sp , cp , profit, loss ;

    printf("\nEnter the Selling Price : ");
    scanf("%f", &sp);

    printf("\nEnter the Cost Price : ");
    scanf("%f", &cp);

    profit = sp - cp ;
    loss = cp - sp;

    if (sp > cp ) {
    printf("\nYou have profit : %f", profit); 
}

    else 
    printf("\nYou have loss!! : -%f", loss);


    return 0 ;
}














