#include <bits/stdc++.h>
using namespace std;
int main(){
    // Inputting array from the user.	
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // Reversing the array
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    // Printing the reversed array.
    cout<<"Reversed array: ";
    for(int i = 0; i < n; i++){
    	cout<<a[i]<<" ";
	}
    return 0;
}
