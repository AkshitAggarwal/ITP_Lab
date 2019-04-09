//WAP to calculate the simple interest. 
#include<stdio.h>

float simpleInterest(int P, int R, int T)
{
	return ((float)(P*R*T))/100;
}
int main()
{
    int P, R, T;
	printf("Enter values of Principal, Rate of Interest and Time period to calculate SI: ");
	scanf("%d %d %d", &P, &R, &T);
	float SI = simpleInterest(P, R, T);
	printf("\n%f", SI);
	return 0;
}
