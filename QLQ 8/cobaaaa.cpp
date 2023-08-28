#include <stdio.h>
int countDistinct(int a[], int n)      
{
   int long i, j, count = 1;
   for (i = 1; i < n; i++)
   {
      for (j = 0; j < i; j++)
      {
         if (a[i] == a[j])
         {
            break;
         }
      }
      if (i == j)
      {
         count++;
      }
   }
   return count;
}

int main()
{
    int n,b;
    
    scanf("%d", &b);
  	for (int i=0;i<b;i++){
	  
    	scanf("%d",&n);
    	int a[n];   
   	
   		for (int i=0;i<n;i++){
    	scanf("%d",&a[i]);	
		}
   		int c= countDistinct(a,n);
   		printf("Case #%d: %d\n",i+1,c);   
    
    }
    return 0;
}
