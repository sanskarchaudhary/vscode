/* Include other headers as needed */
#include<stdio.h>
int main()
{
int t,n,sum;
    scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    sum=0;
    while(n!=0){
      sum=sum+n%10;
      n=n/10;
    }
    printf("%d\n",sum);
  }
  
    return 0;
}