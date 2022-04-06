float evaluation(struct poly p)
{
	int x, sum=0, i;
	printf("enter the value of x: \n");
	scanf("%d", &x);
	for(i=0;i<p.n;i++)
	{
		sum=sum+p.t[i].coeff*pow(x,p.t[i].exp);
	}
	return sum;
}

