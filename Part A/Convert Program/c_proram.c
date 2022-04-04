/*  Convert this program to C++
*   Change to C++ io
*   Change to one line comments
*   Change defines of constants to const 
*   Change array to vector<>
*   inline any shorts functions
*/

#include <stdlib.h>
#define N 40
void sum(int*p, int n, int d[])
{
  int i;
  *p = 0;
  for(i = 0;i<n;i++)
    *p = *p + d[i];
}
int main()
{
  int i;
  int accum = 0;
  int data[N];
  for(i = 0;i<N;i++)
    data[i] = i;
  sum(&accum, N, data);
  printf("sum is %d\n", accum);
  return 0;
}
