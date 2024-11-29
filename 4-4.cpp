#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2)
{
	int listSize = size1 + size2;
	int *list=new int[listSize];
	for (int i = 0; i < size1; i++)
	{
		list[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list[size1 + i] = list2[i];
	}
	bool changed = true;
		do {
			changed = false;
			for (int j = 0; j < listSize - 1; j++) {
				if (list[j] > list[j + 1]) {
					swap(list[j], list[j + 1]);
					changed = true;
				}
			}
		} while (changed);
		cout << "The merged list is ";
		for (int i = 0; i < listSize; i++)
		{
			cout << list[i]<<" ";
		}
		delete[] list;
}
int main()
{
	int size1, size2;
	
	

	cout << "Enter list1:";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i =0 ; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2);
	delete[] list1;
	delete[] list2;

}