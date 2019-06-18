#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
for(i = 0;i < n; i++){
  if(A[i] > lb) lb = A[i]-1;
}
ub = 1000000000;
while(ub - lb > 1){
  int x = 1;
  int y = 0;
  int z = (lb + ub) / 2;
for (i = 0;i < n;i++){
  if(y + A[i] > z) y = A[i],x = x + 1;
  else y = y + A[i] ;
}
if(x > k) lb = z;
else ub = z;
}
  printf("%d\n",ub);
  return 0;
}
