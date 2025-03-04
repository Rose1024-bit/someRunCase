extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int a1[N];
  int a2[N];
  int a3[N];

  int a;
  for ( a = 0 ; a < N ; a++ ) {
    a1[a] = __VERIFIER_nondet_int();
    a2[a] = __VERIFIER_nondet_int();
  }

  int i;
  for ( i = 0 ; i < N ; i++ ) {
    if(i<1000)
    a3[i] = a1[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a2[i];
  }
  
  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a1[x] == a3[x]  );
  }
  return 0;
}

