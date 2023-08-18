Q1-PALLINDROME
int main()
{
   int n;
   cout<<"Enter number to be checked:";
   cin>>n;
   cout<<endl;
   int m=0;
   int i=-1;
   int x=n;
   int temp=n;
   while(x!=0){
       x%10;
       i+=1;
       x=x/10;
   }
   while(n!=0){
       int z=n%10;
       m+=(z*pow(10,i));
       i--;
       n=n/10;
   }
   cout<<m<<endl;
   if (m==temp) {
       cout<<"PALLINDROME"<<endl;}
   else cout<<"NOT PALLINDROME"<<endl;
   
   return 0;
}


Q2-Calculator
int main()
{
   int n;
   cout<<"1-Add, 2-sub, 3-product,4-division"<<endl;
   cout<<"Enter choice::";
   cin>>n;
   int a,b;
   cout<<"Enter 1st num:";
   cin>>a;
   cout<<endl;
   cout<<"Enter 2nd num:";
   cin>>b;
   cout<<endl;
   switch(n){
       case 1: cout<<a+b;
       break;
       case 2: cout<<a-b;
       break;
       case 3: cout<<a*b;
       break;
       case 4: cout<<a/b;
       break;
       default: cout<<"Invalid input";
       break;
   }
   
   return 0;
}


Q3-Binary to decimal
int main()
{
   int n;
   cout<<"Enter binary num:";
   cin>>n;
   cout<<endl;
   int i=0;
   int ans=0;
   while(n!=0){
       int digit=n%10;
       if(digit==1){
           ans+=pow(2,i);
       }
       i++;
       n=n/10;
   }
   cout<<"Decimal num is:"<<ans;
   
   return 0;
}


Q4-Reverse of a number
int main()
{
   int n;
   cout<<"Enter num to be reversed:";
   cin>>n;
   cout<<endl;
   int rev=0;
   int i=-1; //num of digits
   int x=n;
   int temp=n;
   while(x!=0){
       x%10;
       i+=1;
       x=x/10;
   }
   while(n!=0){
       int z=n%10;
       rev+=(z*pow(10,i));
       i--;
       n=n/10;
   }
   cout<<"Reversed num is:"<<rev<<endl;
   return 0;
}


Q5-Alphabet digit or special case
int main()
{
   char ch;
   cout << "Enter character::";
   cin>>ch;
   cout<<endl;
   if(ch>=49 && ch<=57){
       cout<<"Digit";
   }
   else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
       cout<<"Alphabet";
   }
   else{
       cout<<"Special Case";
   }
   return 0;
}


Q6-Swap two num
int main()
{
    int x,y,temp;
   cout<<"Enter 1st num x::";
   cin>>x;
   cout<<endl;
   cout<<"Enter 2nd num y::";
   cin>>y;
   cout<<endl;
   temp=x;
   x=y;
   y=temp;
   cout<<"x="<<x<<endl;
   cout<<"y="<<y<<endl;
   
   return 0;
}



Q7-Multiple of two matrix
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter num of rows in matrix A:";
    cin>>r1;
    cout<<"Enter num of columns in matrix A:";
    cin>>c1;
    cout<<"Enter num of rows in matrix B:";
    cin>>r2;
    cout<<"Enter num of columns in matrix B:";
    cin>>c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    int product[10][10];
    for(int i=0;i<r1;i++){
       for(int j=0;j<c1;j++){
           cout<<"Enter A["<<i+1<<"]["<<j+1<<"]=";
           cin>>arr1[i][j];
       }
       cout<<endl;
    }
    
   for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
           cout<<"Enter B["<<i+1<<"]["<<j+1<<"]=";
           cin>>arr2[i][j];
       }
       cout<<endl;
    }
        cout<<"Matrix A"<<endl;;
    for(int i=0;i<r1;i++){
       for(int j=0;j<c1;j++){
           cout<<arr1[i][j]<<" ";
       }
       cout<<endl;
   }
        cout<<"Matrix B"<<endl;
    for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
           cout<<arr2[i][j]<<" ";
       }
       cout<<endl;
   }
   for(int i=0;i<r1;i++){
       for(int j=0;j<c2;j++){
           product[i][j]=0;
       }}
   for(int i=0;i<r1;i++){
       for(int j=0;j<c2;j++){
           for(int k=0;k<c1;k++){
               product[i][j]+=arr1[i][k]*arr2[k][j];
           }
       }
   }
   cout<<"ANSWER:"<<endl;
   for(int i=0;i<r1;i++){
       for(int j=0;j<c2;j++){
           cout<<product[i][j]<<" ";
       }
      cout<<endl;}  
}


Q8-SIMPLE PYRAMID
int main()
{
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
       cout<<"*";
       }
      cout<<endl;
   }
   cout<<endl;
   return 0;
}

Q8-ROTATED SIMPLE PYRAMID
int main()
{
   for(int i=4;i>=0;i--){
       for(int j=0;j<=i;j++){
           cout<<" ";
       }
       for(int x=5;x>i;x--){
           cout<<"*";
       }
      cout<<endl;
      
   }
   cout<<endl;
   return 0;
}


Q8-INVERTED PYRAMID
int main()
{
   for(int i=4;i>=0;i--){
       for(int j=0;j<=i;j++){
       cout<<"*";
       }
      cout<<endl;
   }
   cout<<endl;
   return 0;
}


Q8-ROTATED INVERTED PYRAMID
int main()
{
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           cout<<" ";
       }
       for(int x=5;x>i;x--){
           cout<<"*";
       }
      cout<<endl;
      
   }
   cout<<endl;
   return 0;
}



Q8- TRIANGLE
int main()
{
    int z=1;
   for(int i=5;i>=0;i--){
       for(int j=0;j<i;j++){
           cout<<" ";
       }
       
       for(int x=1;x<=z;x++){
           cout<<"* ";
       }
       z++;
       cout<<endl;
   }
   
   return 0;
}


Q8- INVERTED TRIANGLE
int main()
{
    int z=1;
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           cout<<" ";
       }
       
       for(int x=5;x>=z;x--){
           cout<<"* ";
       }
       z++;
       cout<<endl;
   }
   
   return 0;
}


Q8-NUMBER PYRAMID
int main()
{
   for(int i=1;i<5;i++){
       for(int j=1;j<=i;j++){
           cout<<i;
       }
       cout<<endl;
   } 
   
   return 0;
}



Q8-CONTINUOUS NUMBER PYRAMID
int main()
{
    int count=1;
   for(int i=1;i<5;i++){
       for(int j=1;j<=i;j++){
           cout<<count<<" ";
           count++;
       }
       cout<<endl;
   } 
   
   return 0;
}


Q8-ROTATED NUMBER PYRAMID
int main()
{
    cout<<"Hello"<<endl;
    int count;
    int z=1;
   for(int i=5;i>0;i--){
       for(int j=0;j<i;j++){
           cout<<" ";
       }
       count=z;
       for(int x=0;x<z;x++){
           cout<<count;
           count++;
       }
       z++;
       cout<<endl;
   }
   
   return 0;
}


Q8-PALLINDROME TRIANGLE
int main()
{
    cout<<"Hello"<<endl;
    int count;
    int z=1;
    int n;
   for(int i=3;i>=0;i--){
       for(int j=0;j<i;j++){
           cout<<"  ";
       }
       count=z;
       for(int x=1;x<=z;x++){
           cout<<count<<" ";
           count++;
       }
       n=2*(z-1);
       for(int y=2;y<=z;y++){
           cout<<n<<" ";
           n--;
       }
       z++;
       cout<<endl;
   } 
   return 0;
}



Q8- ALPHABET PYRAMID
int main()
{
    cout<<"Hello"<<endl;
    char ch='A';
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           cout<<ch<<" ";
       }
    ch++;
    cout<<endl;
   } 
   return 0;
}



Q8-CONTINUOUS ALPHABET PYRAMID
int main()
{
    cout<<"Hello"<<endl;
    char ch='A';
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           cout<<ch<<" ";
           ch++;
       }
    cout<<endl;
   } 
   return 0;
}

