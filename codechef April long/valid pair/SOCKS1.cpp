#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==b||b==c){
	    printf("Yes");
	}
	else if(a==c)
	{
	    printf("Yes");
	}
	else
	{
	    printf("No");
	}
	return 0;
}

