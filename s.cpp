#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}

void arrange(int arr[],int n){
	int x=0,y=n-1,count=0;
	while(x<y){
        count++;
        arr[x]=count;
        arr[y]=count+1;
        x++;
        y--;
        
        }
	
	
	
}

