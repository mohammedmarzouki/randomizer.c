#include<stdio.h>
#include<time.h>
#include <stdlib.h>

long get_nanos(void) {
    struct timespec ts;
    timespec_get(&ts, 1);
    return (long)ts.tv_nsec ;
}

int fct(int m,int i)
{
  while(m--)
    i = i * 10;
  return(i);
}

int ft_rand(int m)
{
    long c;
    int b;
    unsigned int d;
    int i;

    i = 42301961;
    if (m > 10 || m <= 0)
    	return(0);
    m = fct(m,1);
    c = get_nanos();
    b = c % m;
    d = b*i;
	d = d % m;
    return (d);
}

int main()
{
	int i = 1;

	while (i--)
		printf("%d\n",ft_rand(10));
    return 0;
}
