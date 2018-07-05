#include<stdio.h>
main()
{


    int t,i,c=0,j,n;

   scanf("%d",&t);
  for(i=0;i<t;i++){
    for(j=0;j<10;j++){
       scanf("%d",&n);

         while(n%j!=0)

            c++;

            printf("c=%d\n",c);}}


return 0;

}
