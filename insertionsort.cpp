#include<iostream>
#include<array>
using namespace std;
void selectionsort(int arr[],int size){
for(int i=1; i<size;i++){

int current = arr[i];  
int j=i-1;  

   while(arr[j]>current && j>=0){
   arr[j+1] = arr[j];
     j--;
       }
    arr[j+1] = current;   
}
}

void printSorted(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[10]={60,8,4,9,5,90,36,75,2,64};
int size = 10;
cout<<"sorted array"<<endl;
selectionsort(arr,size);
printSorted(arr,size);
}