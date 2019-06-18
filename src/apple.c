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
  ub = A[n-1];
  while(ub - lb > 1){
    int z = (ub + lb) /2;
    int c = 0;
      for(i = 0;i < n;i++){
        c = c + ((A[i]-0.00001) / z) + 1     ;
}
if(c > k) lb = z;
else ub = z;
}
  printf("%d¥n",ub);
  return 0;
}
