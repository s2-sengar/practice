#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,k;
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
            i=0;k=j;
            while(k>=0)
            {
                printf("%d ",arr[i][k]);
    	        k--;
                i++;
            }
    	}
        for(i=1;i<n;i++)
        {
            j=n-1;k=i;
            while(k<n)
            {
               printf("%d ",arr[k][j]);
               k++;
               j--;
            }
        }
        printf("\n");
	}
	return 0;
}
