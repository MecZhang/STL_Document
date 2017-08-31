/**
 * Author:张云涛
 * Date:2017.9.1
 * Version:0.0.1
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	vector<int> v;
	int x;
	cin>>x;
	while(x>0)
	{
		v.push_back(x);
		cin>>x;
	}

	vector<int>::iterator it1 = v.begin();
	vector<int>::iterator it2 = v.end();

	cout<<"Max = " << *max_element(it1,it2) <<endl;

}

