#import 'poly.h'

int **init_all_p(void){// 73 73 73 73 73 73 73 73 73 73 73 73 73 73
  int **p = malloc(73 * sizeof(int*));
  for (int i = 0; i < 73; i++){
    p = malloc(219 * sizeof(int));
  }


int eval(int *p, int n, int x) {
  int ret = p[n]
  for (int i = n; i > 0; i--) {
    ret = (ret * x) + p[i]
  }
  return ret;
}
