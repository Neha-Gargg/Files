#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//MAXIMUM ELEMENT
 void max(int arr[],int n) {
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if (arr[i]>=arr[j]){
                   if(j+1==n){
                       cout<<arr[i];
                   }
               }
               else break;
           }}}
      
int main(){
   int arr[5]={100,7,99,8,1000};
   max(arr,5);
   return 0;
}

//MINIMUM ELEMENT
void min(int arr[],int n) {
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if (arr[i]<=arr[j]){
                   if(j+1==n){
                       cout<<arr[i];
                   }
               }
               else break;
           }}}
      
int main(){
   int arr[5]={100,7,99,8,1000};
   min(arr,5);
   return 0;
}

//SUM OF ARRAY
void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
     }
int main()
{
   int arr[5] ={1,2,3,4,5};
   sum(arr,5);
   cout<<"hello";
   return 0;
}

//LINEAR SEARCH
void search(int arr[],int n,int key){
    int flag=0;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            flag=1;
            break;
        } }
  if(flag==0){
       cout<<"Key is absent!!";
   }
   else cout<<"Key is present!!";
}

int main()
{
   int key;
   cout<<"Enter key to be searched::";
   cin>>key;
   cout<<endl;
   int arr[8]={2,77,65,90,1,23,85,8};
   search(arr,8,key);
   return 0;
}

//BINARY SEARCH
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return mid;
}
int main()
{
   int evenarray[8]={9,11,18,21,29,33,38,100};
   int oddarray[5]={2,7,18,25,99};
   int even=binarysearch(evenarray,8,21);
   int odd=binarysearch(oddarray,5,99);
   cout<<"Index of 21 is "<<even<<endl;
   cout<<"Index of 99 is "<<odd<<endl;
   return 0;
}

//REVERSE AN ARRAY
void rev(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }}

int main()
{
   int arr[5]={10,20,30,40,50};
   rev(arr,5);
   for (int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   
   return 0;
}

//SHIFT ALL NEGATIVE ELEMENTS TO LEFT
void negleft(int arr[],int size){
    int start=0;
    int end=size-1;
    sort(arr,arr+size);
    }

int main()
{
   int arr[5]={10,-20,30,40,-50};
   negleft(arr,5);
   for (int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}