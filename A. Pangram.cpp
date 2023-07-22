#include<iostream>
#include<string>

using namespace std;
bool pangram(string s,int n){
    int arr[26]={0};
    for(int i=0;i<n;i++){
        if(isalpha(s[i])){
         arr[tolower(s[i]) - 'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            return false;
        }
        else{
            return true;
        }
    }

}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(pangram(s,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
