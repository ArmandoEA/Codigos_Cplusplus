#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

using namespace std;

int main ()
{
    cout<<"\n\t\t\t TIPOS DE DATOS \n\n\n\n";
    cout<<"NOMBRE \t\t\t BYTES \t\t MINIMO \t MAXIMO"<<endl<<endl;
    cout<<"Bool   \t\t\t "<<sizeof(bool)<<endl<<endl;
    cout<<"Char   \t\t\t "<<sizeof(char)<<"\t\t "<<CHAR_MIN<<" \t\t "<<CHAR_MAX<<endl<<endl;
    cout<<"Unsigned short int \t "<<sizeof(unsigned short int)<<" \t\t 0 \t\t "<<USHRT_MAX<<endl<<endl;
    cout<<"Short int \t\t "<<sizeof(short int)<<" \t\t "<<SHRT_MIN<<" \t "<<SHRT_MAX<<endl<<endl;
    cout<<"Unsigned long int \t "<<sizeof(unsigned long int)<<" \t\t 0 \t\t "<<ULONG_MAX<<endl<<endl;
    cout<<"Long int  \t\t "<<sizeof(long int)<<" \t\t "<<LONG_MIN<<" \t "<<LONG_MAX<<endl<<endl;
    cout<<"Int    \t\t\t "<<sizeof(int)<<" \t\t "<<INT_MIN<<" \t "<<INT_MAX<<endl<<endl;
    cout<<"Unsigned int \t\t "<<sizeof(unsigned int)<<" \t\t 0 \t\t "<<UINT_MAX<<endl<<endl;
    cout<<"Float  \t\t\t "<<sizeof(float)<<" \t\t "<<FLT_MIN<<" \t "<<FLT_MAX<<endl<<endl;
    cout<<"Double \t\t\t "<<sizeof(double)<<" \t\t "<<DBL_MIN<<" \t "<<DBL_MAX<<endl<<endl<<endl;

    system("pause");
    return 0;
}
