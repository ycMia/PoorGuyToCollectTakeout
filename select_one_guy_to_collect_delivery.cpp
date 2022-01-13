#include<stdio.h>
#include<stdlib.h>

#include<iostream>
#include<time.h>


using namespace std;

int a[4];

int main()
{
	srand((int)time(NULL));
	
	for(int i=0;i<100;i++)
		a[i] = 0;
	
	int hCount = 0;
		
	for(int i = 0; i<100 ;i++)
	{
		int t = rand()%RAND_MAX%4 + 1;
		a[t-1]++;
		//cout<<t<<endl;
	}
	
	cout<<"Jerry: "<<a[0];
	cout<<"Haris: "<<a[1];
	cout<<"Steven: "<<a[2];
	cout<<"William: "<<a[3];
	
	return 0;
}
