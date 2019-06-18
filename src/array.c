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
  lb = 1;
  ub = A[n-1];
  while(ub - lb > 1){
    int z = (ub + lb) /2;
    int c = 0;
      for(i = 0;i < n;i++){
        c = c + (A[i] / z)     ;
}
if(c >= k) lb = z;
else ub = z;
}
  printf("%d\n",lb);

  return 0;
}
