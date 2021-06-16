#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<"Reversed array: ";
    for(int i=n-1; i>=0; i--){
    	cout<<a[i]<<" ";
	}
    return 0;
}
