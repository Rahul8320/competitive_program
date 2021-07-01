#include<iostream>
using namespace std;

void search(int arr[],int n,int key)
{
	int left = 0;
	int right = n-1;
	int position = -1;

	while(left<=right)
	{
		if(arr[left]==key)
		{
			position = left;
			cout<<"Key found at position "<<position+1<<endl;
			break;
		}
		if(arr[right]==key)
		{
			position = right;
			cout<<"Key found at position "<<position+1<<endl;
			break;
		}
		left++;
		right--;
	}
	if(position == -1)
	{
		cout << "Key NOT Found!"<<endl;
	}
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	search(arr,n,key);
	return 0;
}