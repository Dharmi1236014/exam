 #include<stdio.h>

cube(int x)
{
	if(x%3==0 && x%5==0)
	{
		printf("%d is divisible by 3 & 5",x);
	}
	else{
		printf("%d is not divisible by 3 & 5",x);
	}
}

main(){
	
	int a;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	cube(a);
}