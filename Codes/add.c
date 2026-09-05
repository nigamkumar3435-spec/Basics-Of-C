//static int count;
//int count;
int increment()
{
//    int count=0;
	static int count=3;
	count += 1;	
	return count;
}
