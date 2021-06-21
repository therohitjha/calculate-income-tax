#include <stdio.h>
void main() {
       float income;
       float tax;
       float cal;
       float range;
        printf("Plese Enter Your Income:\n ");
        scanf("%f", & income);
    if(income<=2500){
           printf("Your Income Tax is : \n ");
           printf("0");
       }
     else if(income>2500){
     	 range=income-(float)2500;
     	 if(range<=2500){
     	 	 cal += ((float)10/100)*range;
		  }else{
		  	cal += ((float)10/100)*(float)2500;
		  }
         if(income<=5000){
              printf("Your Income Tax is Rs %1.f: \n ",cal);
         }
        if(income>5000){
            range=income-(float)5000;
            if(range<=5000){
     	 	 cal += ((float)20/100)*range;
		  }else{
		  	cal += ((float)20/100)*(float)5000;
		  }
            if(income<=10000){
                printf("Your Income Tax is Rs %1.f: \n ",cal);
            }
           }
           if(income>10000){
            range=income-(float)10000;
            cal += ((float)30/100)*range;
                printf("Your Income Tax is Rs %1.f: \n ",cal);
           }
        }
}
