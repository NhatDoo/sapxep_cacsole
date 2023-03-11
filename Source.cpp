#include <iostream>
using namespace std;
void sapxep(int a[],int n )
{
	for (int i = 0; i < n; i++)
	{
		for (int j =i+1 ;j<n; j++)
		{
			if (a[i]<a[j]||a[i]%2==1)
			{
				swap(a[i], a[j]);
			}
		}
	}
} 
void swap(int &a ,int&b)
{
	int x = a;
    a = b;
	b = x;
}
void nhapmang(int a[], int n) 
{
	for (int i = 0; i < n; i++) 
	{
		cout << "a[" << i << "] =";
		cin >> a[i];
	}

}
void xuatmang(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
int main()
{
	int a[100];
	int n = 8;
	nhapmang(a, n);
    sapxep(a, n);
	xuatmang(a, n);
	
}