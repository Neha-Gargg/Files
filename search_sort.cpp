#include <iostream>
using namespace std;

//Ques1 BUBBLE SORTING
int main()
{
   int arr[6]={2,9,1,99,65,10};
   int n=6;
   cout<<"Given array::";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=1;i<n;i++){
    bool swapped= false;
       for(int j=0;j<n-i;j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
           }
       }
     if (swapped==false){
         break;
     }
   }
   cout << "Sorted array::";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}

//Ques2 INSERTION SORTING
int main()
{
   int arr[6]={25,19,11,9,65,10};
   int n=6;
   cout<<"Given array::";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=1;i<n;i++){
       int temp=arr[i];
       int j=i-1;
       for(;j>=0;j--){
           if(arr[j]>temp){
            arr[j+1]=arr[j];
           }
           else{
               break;
           }
       }
      arr[j+1]=temp;
   }
   cout << "Sorted array::";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}

//Ques3 SELECTION SORTING
int main()
{
   int arr[5]={2,9,1,99,65};
   cout<<"Given array::";
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<4;i++){
       int minindex=i;
       for(int j=i+1;j<5;j++){
           if(arr[j]<arr[minindex]){
               minindex=j;
           }
       }
       swap(arr[minindex],arr[i]);
   }
   cout << "Sorted array::";
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}

//Ques4 Finding first and last position of an element in a sorted array

int main()
{
   int arr[]={1,3,5,5,5,5,67,123,125};
   int ele;
   cout<<"Enter element::";
   cin>>ele;
   int i=0;
   for(i=0;arr[i]<ele;){
       i=i+1;
   }
   cout<<"First position:"<<i<<endl;
   int j;
    for(j=8;arr[j]>ele;){
       j=j-1;
   }
   cout<<"Last position:"<<j;
   
   return 0;
}

//Ques5 Finding fixed point

int main()
{
   int arr[]={-10, -5, 0, 3, 7};
   for(int i=0;i<5;i++){
       if(arr[i]==i){
           cout<<"Fixed point:"<<i;
       }
   }
   return 0;
}

//Ques6 LINEAR SEARCH
void search(int arr[],int n,int key){
    int flag=0;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            flag=1;
            break;
        } }
  if(flag==0){
       cout <<"Key is absent!!";
   }
   else cout <<"Key is present!!";
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

//Ques7 BINARY SEARCH
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
