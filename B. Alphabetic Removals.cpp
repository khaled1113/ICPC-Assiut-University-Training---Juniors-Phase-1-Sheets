#include<iostream>
#include<string>
#include<vector>
using namespace std;


string deleteChar(int k,string s){
    if(k==0){
        return s;
    }
    //need to find the smallest alphabet in the string
    int min=0;
    for(int i=1;i<s.length();i++){
        if(s[i]<s[min]){
            min=i;
        }
    }
    //delete the smallest alphabet
    s.erase(s.begin()+min);
    return deleteChar(k-1,s);





}
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    cout<<deleteChar(k,s);
    return 0;
 
   
}
