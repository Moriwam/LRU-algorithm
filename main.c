#include<stdio.h>
#include<stdlib.h>
main()
{
int q[100],p[100],PF=0,PR=0, PF1,d,f,i,j,k=0,n,r,t,b[100],PF2[100];
freopen("input.txt","r",stdin);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
scanf("%d",&f);
q[k]=p[k];
PF++;
k++;
for(i=1;i<n;i++)
 {
 PF1=0;
 for(j=0;j<f;j++)
 {
 if(p[i]!=q[j])
 PF1++;
 }
 if(PF1==f)
 {
 PF++;
 if(k<f)
 {
 q[k]=p[i];
 k++;
 }
 else
 {
 for(r=0;r<f;r++)
 {
 PF2[r]=0;
 for(j=i-1;j<n;j--)
 {
 if(q[r]!=p[j])
PF2[r]++;
 else
 break;
 }
 }
 for(r=0;r<f;r++)
 b[r]=PF2[r];
 for(r=0;r<f;r++)
 {
 for(j=r;j<f;j++)
 {
 if(b[r]<b[j])
 {
 t=b[r];
 b[r]=b[j];
 b[j]=t;
 }
 }
 }
 for(r=0;r<f;r++)
 {
 if(PF2[r]==b[0])
q[r]=p[i];
 }
 }
 }
 }
 PR= PF-f;
 printf("\n ***********************************************");
 printf("\n Least Recently Used (LRU) algorithm\n");
 printf(" ***********************************************\n");
 printf("\n 1. Number of page fault is : %d ",PF);
 printf("\n 2. Number of page replacement is : %d \n",PR);
return 0;
}