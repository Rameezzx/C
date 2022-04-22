#include <stdio.h>
#include<stdbool.h>

int main()
{
    printf("CALCULATOR FOR UNIT CONVERSION\n");
    int c;
    float miles,foot,inches,kg,metres,km,inch,cm,pound;
    printf("ENTER A DIGIT:");
    scanf("%d", &c);
    while (true){
        printf("Enter 1 to convert km to miles\n");
        printf("Enter 2 to convert inches to foot\n");
        printf("Enter 3 to convert cms to inches\n");
        printf("Enter 4 to convert pound to kgs\n");
        printf("Enter 5 to convert inches to metres\n");
        printf("Enter 0 to exit\n");

        switch (c){
        case 1:printf("Enter value in kms:"); scanf("%f", &km); miles = km*0.621371;
               printf("The value in miles is: %f\n", miles); break;
        case 2:printf("Enter value in inches:"); scanf("%f", &inches); foot = inches*0.08333;
               printf("The value in foot is: %f\n", foot); break;
        case 3:printf("Enter value in cm:"); scanf("%f", &cm); inch = cm*0.393701;
               printf("The value in inch is: %f\n", inch); break;
        case 4:printf("Enter value in pound:"); scanf("%f", &pound); kg = pound*0.453592;
               printf("The value in kgs is: %f\n", kg); break;
        case 5:printf("Enter value in inches:"); scanf("%f", &inches); metres = inches*0.0254;
               printf("The value in metres is: %f\n", metres); break;
        case 0: goto end;
         }
    }
    end: printf("You have Exited");
    return 0;
}
