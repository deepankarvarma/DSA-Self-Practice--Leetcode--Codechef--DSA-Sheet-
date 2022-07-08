class Solution {
public:
    int getSum(int a, int b) {
	int sum = 0;
	if(a<0 && b<0)
	{
		a=abs(a);
		b=abs(b);
		for (int i = 1; i <= b; i++)
			a++;
	    sum = ~(a);
		sum++;
		
	}
	else if (a < b) {
		for (int i = 1; i <= b; i++)
			a++;
		sum = a;

	} else {
		for (int i = 1; i <= a; i++)
			b++;
		sum = b;
	}
	return sum;

}
};