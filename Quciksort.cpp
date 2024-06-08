#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int s , int e){
    int pivot = arr[s];

int count = 0;
for (int i = s+1; i <=e; i++)
{
   if(arr[i]<=pivot){

    count++;
   }
}
//pivot place right index
int pivotindex = s+count;
swap(arr[pivotindex], arr[s]);

//check the left and right part are on their right position on not....
int i =s , j =e;
while(i<pivotindex && j>pivotindex){
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    while(i<pivotindex && j>pivotindex){
        swap(arr[i++], arr[j--]);
    }
}
return pivotindex;



}
void quicksort(int arr[], int s, int e){
    //base case
if(s>=e){
    return;
}
    //partition
    int p = partition(arr,s,e);

    //left part sort
    quicksort(arr , s, p-1);

    //right part sort
    quicksort(arr, p+1,e);

}



int main(){
int arr[5] = {3,1,4,2,6};
int n  = 5;
    quicksort(arr, 0 , n-1);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}