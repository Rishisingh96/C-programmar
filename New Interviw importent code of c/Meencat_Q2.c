#include<stdio.h>
int main()
{
	int p,q,r,s;
	p=1;
	q=2;
	r=p,q;
	s=(p,q);
	printf("p=%d q=%d",p,q);
	return 0;
}
/*A.p=1 , p=1
B.p=1 q=2
c.p=2 q=2
D.Invalid syntex
*/

