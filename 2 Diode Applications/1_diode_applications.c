#include<stdio.h>
int main(){
    int polarity_right=1;
    if(polarity_right){
        printf("System Powered\n");
    }
    else{
        printf("Reverse polarity protection active\n");
    }

    int relay_off=1;
    if(relay_off){
        printf("Flyback diode active\n");
    }

    return 0;
}