#import 'poly.h'

int eval(int *p, int n, int x) {
  int ret = p[n]
  for (int i = n; i > 0; i--) {
    ret = (ret * x) + p[i]
  }
  return ret;
}
