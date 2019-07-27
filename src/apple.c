#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int z){
  int i;
  int c = 0;
    for(i = 0; i < n; i++){
      c = c + ((A[i] - 1) / z) + 1     ;
}
  if(c > k) return 1;
  else return 0;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 0;
for(i = 0;i < n; i++){
  if(A[i] > ub) ub = A[i];
}
  while(ub - lb > 1){
    int z = (ub + lb) / 2;
if(p(z) == 1) lb = z;
else ub = z;
}
  printf("%d\n",ub);
  return 0;
}
