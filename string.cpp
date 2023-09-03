#include <iostream>
#include <string.h>
using namespace std;

//Ques1 Converting chars to lowercase
char lower(char ch){
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

//Ques2 Check pallindrome or not
bool pallin(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(lower(a[s])!=lower(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

//Ques3 Reverse
void rev(char arr[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

//Ques4 To find length
int len(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[15];
   cout << "Enter name::"; 
   cin >> name;
   int n=len(name);
   cout<<"Length is "<<n<<endl;
   rev(name,n);
   cout<<"Reverse is "<<name<<endl;
   cout<<"Pallindrome or not::"<<pallin(name,n);
   
   return 0;
}

//Ques5 Replace space with @10
string replace(string s){
    string temp;
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            temp+="@10";
        }
        else{
            temp+=s[i];
        }}
    return temp;
}
int main()
{
   string s;
   cout<<"Enter string::";
   getline(cin,s);
   cout<<"Updated string is:"<<replace(s);
   return 0;
}

//Ques6 Remove occurence of substring
string removeocc(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
   string s,sub;
   cout<<"Enter string::";
   cin>>s;
   cout<<"Enter substring::";
   cin>>sub;
   cout << removeocc(s,sub);
   return 0;
}

//Ques7 To find if a character is present in a string or not
int main()
{
    string sample;
    cout<<"Enter string::";
    cin>>sample;
    char ch;
    cout<<"Enter char to be find::";
    cin>>ch;
    if (sample.find(ch)!=string::npos){
        cout<<"string contains the character - "<< ch << endl;
    }
    else {
        cout<<"string do not contains the character - "<< ch << endl;
    }
    return 0;
}
