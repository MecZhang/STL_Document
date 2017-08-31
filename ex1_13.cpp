/**
 * Author:张云涛
 * Date:2017.9.1
 * Version:0.0.1
 */
#include <iostream>
#include <list>
#include <ctime>
using namespace std;
#define CLOCKS_PER_SECOND 5;
void mysleep(int second)
{
	clock_t st;
	st = clock();
	while(clock()-st<second*CLOCKS_PER_SECOND);
}

void main()
{
	int count = 5;
	float number = 0.0;
	list<int> mylist;
	cout<<"请输入任意5个数字："<<endl;
	while(count--)
	{
		cin>>number;
		mylist.push_back(number);
	}
	list<int>::iterator iter;
	for(iter=mylist.begin();iter!=mylist.end();iter++)
	{
		cout<<*iter<<" ,";
	}
	cout<<endl;
	return ;
}
