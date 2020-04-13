int add(int a, int b, int c)
{
	int n = a<b?a:b;
	return n = c < n ? c:n;
}
int add(int a, int b, int c, int d)
{
	return d<add(a,b,c)?d:add(a,b,c);
}
float add(float a, float b, float c)
{
	float n = a < b ? a : b;
	return n = c < n ? c : n;
}
double add(double a, double b)
{
	int n = 0;
	return n = a < b ? a : b;
}
