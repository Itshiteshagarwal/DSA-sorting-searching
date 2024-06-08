#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& arr, int n){
    for (int i = 0; i < n-1; i++)
    {
       int midindex =i;
       for (int j = i+1; j < n; j++)
       {
       if(arr[j]<arr[midindex]){
midindex =j;
       }
       }
       swap(arr[midindex],arr[i]);
    } 
    
}
//time complexity = O(n^2)
//space complexity = O(1)