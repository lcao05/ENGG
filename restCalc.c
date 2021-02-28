int main()
{
	float tippercent;
	float totalbill;
	int totalppl;
	float finalbill;

	printf("plz input total bill:");

	scanf("%f",&totalbill);

	printf("plz input tip percent:");

	scanf("%f",&tippercent);

	printf("plz input total amount of people:");

	scanf("%d",&totalppl);

	printf("%f %f %d\n", totalbill,tippercent,totalppl);


	printf("%f\n", finalbill);

	if (totalppl==0)
	{
		printf("insufficent number");
		return 0;
	}
	
	finalbill=(totalbill*tippercent+totalbill)/totalppl;


	if ((tippercent > 0.05) && (tippercent < 0.3))
	{
		printf("%f\n",finalbill);
	}
	else
	{	
		printf("tip out of range");
		return 0;
	}
	
}	

