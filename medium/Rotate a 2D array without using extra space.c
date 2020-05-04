#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j;
	    scanf("%d",&n);
	    int arr[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&arr[i][j]);
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        for(i=n-1;i>=0;i--)
	        {
	            printf("%d ",arr[i][j]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
