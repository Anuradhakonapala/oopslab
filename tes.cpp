#include<iostream>
#ifndef boxArea
#include "boxArea.h"
#endif
#ifndef boxVolume
#include "boxVolume.h"
#endif
using namespace std;
int main(){
    float length, width,height;
    string a,b,c;
    cout<<"Enter length "<<endl;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(isdigit(a[i])==0){
            cout<<"Invalid operand"<<endl;
            return 0;
        }
        

            
    }
    length=stoi(a);
    cout<<"Enter width :"<<endl;
    cin>>b;
    for(int i=0;i<b.length();i++){
        if(isdigit(b[i])==0){
            cout<<"Invalid operand"<<endl;
            return 0;
        }
            
    }
    width=stoi(b);

    cout<<"Enter height :"<<endl;
    cin>>c;
    for(int i=0;i<c.length();i++){
        if(isdigit(c[i])==0){
            cout<<"Invalid operand"<<endl;
            return 0;
        }
        
    }
    height=stoi(c);

    boxArea(length, width, height);
    boxVolume(length, width, height);
}

