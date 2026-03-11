#include<stdio.h>
#include<string.h>
int main() {
    float x,y;
    char name[10];
    printf("eneter your country with proper alphabets ( kuwait,usa,euro: ");
    scanf("%s",name);
    if(strcmp(name,"kuwait")!=0 && strcmp(name,"usa")!=0 &&strcmp(name,"euro")!=0) {
        printf("you entered wrong country: %s",name);
        return 0;
    }
    printf("enter the number :");
    scanf("%f",&x);
    if (strcmp(name,"kuwait")==0) {
        y=x*280;
        printf("your total money : %.2f",y);
    }
    else if(strcmp(name,"usa")==0) {
        y=x*83;
        printf("your total money :%.2f",y);
    }
    else if(strcmp(name,"euro")==0) {
        y=x*106;
        printf("you total money: %.2f",y);
    }
    else
    {
        printf("country not found");
    }

    return 0;
}