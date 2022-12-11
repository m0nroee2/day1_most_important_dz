#include <iostream>

using namespace std;

void add(int arr[], const int size);
void show(int arr[], const int size);
void plus_one(int arr[], const int size);
float srende(int arr[], const int size);


int main()
{

	const int size = 5;
	int* arr = new int[size];

	add(arr, size);			//заполняет
	//show(arr, size);		//показывает
	cout << endl;
	plus_one(arr, size);	
	show(arr, size);
}

void add(int arr[], const int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << "Dannie" << endl;
		cin >> arr[i];
	}

}

void show(int arr[], const int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}
void plus_one(int arr[], const int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + 1;
	}

}
float srende(int arr[], const int size)
{




}