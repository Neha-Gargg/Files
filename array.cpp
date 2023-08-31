#include <iostream>
using namespace std;
//MAXIMUM ELEMENT
 /*void max(int arr[],int n) {
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
}*/

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
   cout<<"hello";
}
