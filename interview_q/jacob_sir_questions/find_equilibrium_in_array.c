/* equilibrium position is that position in array
 * such that sum of elements
 *  before and after it is equal
 */

#include<stdio.h>
int main()
{
	int i,j,k,sb,sa;
	int arr[5]={4,1,1,1,2};
	for(i=0; i<5; i++)
	{
		sb=sa=0;
		for(j=0; j<i; j++)
			sb=sb+arr[j];
		for(k=i+1; k<5; k++)
			sa=sa+arr[k];
		printf("%d:%d\n",sb,sa);
		if(sa == sb)
			printf("position:%d\n",i);
	}
}








