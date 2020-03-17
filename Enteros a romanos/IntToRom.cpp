#include <iostream>
#include <sstream>

using namespace std;

string getRom(char c, int n){
    if(n==0){   //si está en las unidades
        switch(c)
        {
            case '1': return "I";
            case '2': return "II";
            case '3': return "III";
            case '4': return "IV";
            case '5': return "V";
            case '6': return "VI";
            case '7': return "VII";
            case '8': return "VIII";
            case '9': return "IX";
            default: return "";
        }
    }else if(n==1){     //si está en las decenas
        switch(c)
        {
            case '1': return "X";
            case '2': return "XX";
            case '3': return "XXX";
            case '4': return "XL";
            case '5': return "L";
            case '6': return "LX";
            case '7': return "LXX";
            case '8': return "LXXX";
            case '9': return "XC";
            default: return "";
        }
    }else if(n==2){     //si está en las centenas
        switch(c)
        {
            case '1': return "C";
            case '2': return "CC";
            case '3': return "CCC";
            case '4': return "CD";
            case '5': return "D";
            case '6': return "DC";
            case '7': return "DCC";
            case '8': return "DCCC";
            case '9': return "CM";
            default: return "";
        }
    }else{
        return "";
    }
}

string toRomano(string num){
    int tam = num.length(), j=0;
    string rom="";
    for(int i=tam-1; i>=0; i--){
        rom = getRom(num[i],j) + rom;
        j++;
    }

    return rom;
}

int main()
{
    int n;
    cout<<"Ingrese un numero menor a 1000: ";
    cin>>n;

    if(n<1000 && n>0){
        stringstream ss;
        string str, romano;

        ss<<n;
        str = ss.str();
        romano = toRomano(str);

        cout<<"El numero "<<n<<" en romano es "<<romano<<endl;
    }else if(n>=1000){
        cout<<"Ingrese un numero menor a 1000"<<endl;
    }else{
        cout<<"Ingrese en numero positivo"<<endl;
    }

    return 0;
}
