 #include <stdio.h>
void againgreet(){ // function 
    printf("\nbey\n");
    return ;
}
void greet() // funtion 
{
    printf("\nHey,how are you?\n");
    printf("Where are you go?\n");
    return;
}
int main()
{
    greet(); // function call 
    againgreet();
    greet();
    againgreet();
    return 0;
}
