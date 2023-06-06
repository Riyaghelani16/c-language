#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter value of a:");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	
	printf("Enter value of c:");
	scanf("%d",&c);
	
	printf("Enter value of d:");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("max=%d",a);
			}
			else
			{   printf("max=%d",d);
			}
			
		}
		else
		{
			if(c>d)
			{   printf("max=%d",c);
			}
			else
			{  printf("max=%d",d);
			}
		}
	}
	else
	{  if(b>c)
	  {   if(b>d)
	  {  printf("max=%d",b);
	  }
	  else
	  {   printf("max=%d",d);
	  }
	  }
	  else
	  {  if(c>d)
	  {   printf("max=%d",c);
	  }
	  else
	  {  if(c>d)
	  printf("max=%d",c);
	  }  
	  }
	  else
	  {   printf("max=%d",d);
	  }

	  
	  
	}
	
	return 0;
}
