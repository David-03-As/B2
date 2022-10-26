#include<iostream>
using namespace std;
int main() {

        float x,s=0;
        int i=0,l;
        cout<<"Ingrese limite: ";
        cin>>l;
        do{
                cout<<"Ingrese x: ";
                cin>>x;
                i=i+1;
                s=s+x;
        }
        while(i<l);

        cout<<"La suma total  es : "<<s<<endl;

        return 0;
}
