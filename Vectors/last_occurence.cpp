#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0; i<6 ; i++){
        cin>> v[i];

    }

    cout<<"Enter x : ";
    int x;
    cin >> x;

    int occurence = -1; 

    //from beginning

    for(int i=0 ; i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }cout << occurence << endl;

    //from end
    //for(int i=v.size()-1 ; i>=0 ;i--){
    //    if(v[i]==x){
    //        occurence=i;
    //        break;
    //    }
    //}cout << occurence << endl;


    return 0;
}