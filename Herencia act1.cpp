#include <iostream>
#include <stdlib.h>

using namespace std;

 class transportes {
    private:
     string tiptrp;
     string nombre;
     int npersonas;
     float velocidad;
     string medicion;
    public:
        transportes(string,string,int,float,string);
        void Transportemost();
    };
 class terrestre : public transportes{
    private:
     int ruedas;
     int ventanas;
    public:
     terrestre(string,string,int,float,string,int,int);
     void terrestresw();
};

class acuatico : public transportes{
    private:
     string tipdespl;
    public:
     acuatico(string,string,int,float,string,string);
     void acuaticow();
};

class volador : public transportes{
    private:
     string tpvul;
     int altvul;
     string medaltu;
     int ventanas;
    public:
     volador(string,string,int,float,string,string,int,string,int);
     void voladorw();
};

transportes::transportes(string tpd,string nombreL,int npersonasL,float velocidadL,string medicionL){
tiptrp = tpd;
nombre = nombreL;
npersonas = npersonasL;
velocidad = velocidadL;
medicion = medicionL;
}

terrestre::terrestre(string tpd,string nombreL,int npersonasL,float velocidaL,string medicionL,int ruedasW,int ventanasW) : transportes(tpd,nombreL,npersonasL,velocidaL,medicionL){
ruedas = ruedasW;
ventanas = ventanasW;
}

acuatico::acuatico(string tpd,string nombreL,int npersonasL,float velocidaL,string medicionL,string despl) : transportes(tpd,nombreL,npersonasL,velocidaL,medicionL){
tipdespl = despl;
}

volador::volador(string tpd,string nombreL,int npersonasL,float velocidaL,string medicionL,string tpvulw,int altvulw,string medaltuw,int ventanasw) : transportes(tpd,nombreL,npersonasL,velocidaL,medicionL){
tpvul = tpvulw;
altvul  = altvulw;
ventanas = ventanasw;   
medaltu = medaltuw;
}

void transportes::Transportemost(){
    cout<<"\t"<<tiptrp<<endl;
    cout<<"El nombre del transporte es "<<nombre<<endl;
    cout<<"La capacidad de usuarios del transporte es de: "<<npersonas<<endl;
    cout<<"La velocidad del transporte es de: "<<velocidad<<medicion<<endl;   
}

void terrestre::terrestresw(){
    Transportemost();
    cout<<"Contiene un total de "<<ruedas<<" ruedas"<<endl;
    cout<<"Contiene "<<ventanas<<" ventanas"<<endl;
}

void acuatico::acuaticow(){
    Transportemost();
    cout<<"Se dezplaza atravez de: "<<tipdespl<<endl;  
}

void volador::voladorw(){
    Transportemost();
    cout<<"Vuela atravez de: "<<tpvul<<endl;  
    cout<<"Vuela a una altura de: "<<altvul<<medaltu<<endl;
    cout<<"Tiene "<<ventanas<<" ventanas"<<endl;
}

int main(){ 

terrestre bicicleta("----Terrestre----","Bicicleta",2,11.5,"kmh",2,0);
bicicleta.terrestresw();

cout<<"\n";

acuatico barco("----Acuatico----","Barco",3000,24,"kts","helices");
barco.acuaticow();

cout<<"\n";


volador avioncomercial("----Volador----","Avion Comercial",300,355,"kmh","alas",9000,"mts",123);
avioncomercial.voladorw();
return 0;
}