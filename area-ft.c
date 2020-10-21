#include <stdio.h>
#include <conio.h>
void main() 
{   
    float ropani,anna,paisa,dam,num,rem;
   
    printf("Enter an area: ");  	// display the character under quotation
    
    scanf("%f", &num);				// read and store number in num variable -input function

    
	 printf("You entered: %f \n", num);	//display the number you entered which is stored in num variable
	 //rem=num%10; //remainder of number divided by 10
	 //printf("number is %f",rem) ;  
	  
	  for(ropani=0;num>5476;ropani++)
	  {
	  	num=num-5476;
	  }
	  printf("ropani is %f\n",ropani);
	  printf("num is %f\n",num);
	  for(anna=0;num>342.25;anna++)
	  {
	  	num=num-342.25;
	  }
	  printf("anna is %f\n",anna);
	  printf("num is %f\n",num);
	  
	  
	  for(paisa=0;num>85.56;paisa++)
	  {
	  	num=num-85.56;
	  }
	  printf("paisa is %f\n",paisa);
	  printf("num is %f\n",num);
	  
	  for(dam=0;num>21.39;dam++)
	  {
	  	num=num-21.39;
	  }
	  printf("dam is %f\n",dam);
	  printf("num is %f",num);
	  
	  printf("\nThe area of the plot is %f ropani,%f anna,%f paisa ,%f dam ,%f",ropani,anna,paisa,dam,num);
    getch();
}
