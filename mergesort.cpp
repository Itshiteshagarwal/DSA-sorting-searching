#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
      int k = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //merge arrays
    int index1 =0;
    int index2 = 0;
    int minArrayIndex = s;
while (index1<len1 && index2<len2)
{
    if(first[index1]< second[index2]){
        arr[minArrayIndex++] = first[index1++];
    }
    else{
        arr[minArrayIndex++] = second[index2++];
    }
    while(index1< len1){
        arr[minArrayIndex++] = first[index1++];
    }
    while(index2 <len2){
        arr[minArrayIndex++] = second[index1++]; 
    }
}

    
}
void mergesort(int *arr, int s, int e){
    if(s>e){
        return;
    }
    int mid = (s+e)/2;
    //left part sort
    mergesort(arr, s, mid);

    //rightpart
    mergesort(arr, mid+1, e);

    //merge
    merge(arr,s,e);
}


int main(){
int arr[7] = {23,45,6,9,85,46,52};
int n = 7;

mergesort(arr,0,n-1);
    return 0;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}