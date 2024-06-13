#include<stdio.h>
#define infinity 9999
#define MAX 20
int minimum(int a,int b)
{
if(a<=b)
return a;
else
return b;
}
 int main()
{
int i,j,k,n,start,end,adj[MAX][MAX],path[MAX][MAX];
printf("enter the number of vertices:");
scanf("%d",&n);
printf("enter weighted matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&adj[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(adj[i][j]=0)
path[i][j]=infinity;
else
path[i][j]=adj[i][j];
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(i==j)
path[i][j]=infinity;
else
path[i][j]=minimum(path[i][j],path[i][k]+path[k][j]);
}
}
printf("shortest path matrix is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%6d",path[i][j]);
printf("\n");
}
printf("enter start vertex:");
scanf("%d",&start);
printf("enter end vertex:");
scanf("%d",&end);
printf("The min cost between %d and %d is %d",start,end,path[start][end]);
}
