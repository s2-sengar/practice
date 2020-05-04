#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,flag,i,j;
	    scanf("%d%d",&a,&b);
	    for(i=a;i<=b;i++)
	    {
	        if(i>2)
	        {
    	        flag=0;
    	        for(j=2;j<i;j++)
    	        {
    	            if(i%j==0)
    	            {
    	                flag++;
    	            }
    	        }
    	        if(flag==0)
    	        {
    	            printf("%d ",i);
    	        }
	        }
	        else if(i>1)
	        {
	            printf("2 ");
	        }
	    }
	    printf("\n");
	}
	return 0;
}
