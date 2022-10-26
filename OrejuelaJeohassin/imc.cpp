//Jeohassin Wilton Orejuela Garcia

#include<iostream>
using namespace std;
int main()
{
        float imc,peso,altura;

        cout<<"Ingrese peso (kg): ";
        cin>>peso;
        cout<<"Ingrese altura (metros): ";
        cin>>altura;
        imc=peso/(altura*altura);

        if(imc<18.40)
        {
                cout<<"Su peso es bajo"<<endl;
        }
        if(imc>=18.50 && imc<24.99)
        {
                cout<<"Su peso es normal"<<endl;
        }
        if(imc>=25 && imc<29.99)
        {
                cout<<"Tiene sobrepeso"<<endl;
        }
        if(imc>=30 && imc<34.99)
        {
                cout<<"Tiene obesidad leve"<<endl;
        }
        if(imc>=35 && imc<39)
        {
                cout<<"Tiene obesidad media"<<endl;
        }
        if(imc>40)
        {
                cout<<"Tiene obesidad morbida"<<endl;
        }

        return 0;
}

