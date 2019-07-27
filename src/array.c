#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int i){
  if(A[i] >= k) return 1;
  else return 0;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = -1;
    ub = n;
    while(ub - lb > 1){
      int m = (lb + ub) / 2;
      if(p(m) == 1) ub = m;
      else lb = m;
    }
    printf("%d\n",ub);
  return 0;
}
