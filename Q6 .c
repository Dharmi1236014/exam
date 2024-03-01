#include<stdio.h>

struct mobile{
	
	char name[1000];
	int company_name,color,model,price;
	float percent;
};

main(){
	
	int n,i;
	struct mobile m;
	printf("enter the number of mobiles: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		
		printf("Enter details of Mobile : %d\n",i);
		
		printf("Enter Company_Name : ");
		scanf("%s",&m.name);
		
		printf("Enter  Color : ");
		scanf("%s",&m.color);
		
		printf("Enter Model : ");
		scanf("%s",&m.model);
		
		printf("Enter Price : ");
		scanf("%s",&m.price);
		
		printf("----------------------------------\n");
	}
	
}
