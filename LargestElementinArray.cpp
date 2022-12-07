#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sortarr(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
    }

int main(){

vector<int>arr1={2,3,4,5};
vector<int>arr2={4,5,5,7};
cout<<"Largest Number in arr1 is "<<sortarr(arr1)<<endl;
cout<<"Largest Number in arr2 is "<<sortarr(arr2)<<endl;

return 0;



}
