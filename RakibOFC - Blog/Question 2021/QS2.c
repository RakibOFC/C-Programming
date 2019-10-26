#include<iostream>
using namespace std;

void printArraystring(string,int);

void sort(string s[], int n)
{
	for (int i=1 ;i<n; i++)
	{
		string temp = s[i];

		int j = i - 1;
		while (j >= 0 && temp.length() < s[j].length())
		{
			s[j+1] = s[j];
			j--;
		}
		s[j+1] = temp;
	}
}

void printArraystring(string str[], int n)
{
	for (int i=0; i<n; i++)
        printf("%d ", str[][i])
}

int main()
{
	string arr[] = {"see", "u", "next", "time"};
	int i, n = sizeof(arr)/sizeof(arr[0]);

	printf("Input: ");
	for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

	sort(arr, n);

	printf("Output: ");
	printArraystring(arr, n);
    printf("\n\n");

	return 0;
}
