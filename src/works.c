#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int z){
    int i;
    int x = 1;
    int y = 0;
    for (i = 0;i < n;i++){
      if(y + A[i] > z) y = A[i],x = x + 1;
      else y = y + A[i] ;
    }
    if(x > k) return 1;
    else return 0;
}

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
  int z = (lb + ub) / 2;
if(p(z) == 1) lb = z;
else ub = z;
}
  printf("%d\n",ub);
  return 0;
}
