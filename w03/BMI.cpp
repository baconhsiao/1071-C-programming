#include <stdio.h>

int main(){
	float height,m,weight,BMI;
	
	printf ("Enter height : ");
	scanf ("%f",&height);
	printf ("Enter weight : ");
	scanf ("%f",&weight);
	m=height/100;
	BMI=weight/(m*m);
	printf ("BMI = %.1f\n",BMI);
	
	while(BMI>=0){
	
	if(BMI<18.5)
    	printf("過輕.\n");
    
    if(BMI>=18.5 && BMI<24)
    	printf("正常.\n");
    
    if(BMI>=24 && BMI<27)
    	printf("過重.\n");
    
    if(BMI>=27 && BMI<30)
    	printf("輕度肥胖.\n");
    
    if(BMI>=30 && BMI<35)
    	printf("中度肥胖.\n");
    
    if(BMI>=35)
   		printf("重度肥胖.\n");
	
	printf ("Enter height : ");
	scanf ("%f",&height);
	printf ("Enter weight : ");
	scanf ("%f",&weight);
	m=height/100;
	BMI=weight/(m*m);
	printf ("BMI = %.1f\n",BMI);
}
}
