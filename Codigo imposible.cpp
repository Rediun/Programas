#include <iostream>
#include <cstdlib>
#include <vector>
#include <memory>

using namespace std;
class Vagabundos{
private:
 int edad;
 string nombre;
 int pobreza;
public:
 Vagabundos(int edadL, string nombreL, int pobrezaL){
    edad = edadL;
    nombre = nombreL;
    pobreza = pobrezaL;
    cout<<"Aqui andamos contruyendo a "<<nombre<<endl;
 }

  ~Vagabundos(){
    cout<<"Aqui andamos envagelizando a "<<nombre<<endl;
  }

  void humillarse(){
    cout<<"\n";
    cout<<"Hola soy "<<nombre<<" y tengo "<<edad<<" "<<"ciclos solares de edad"<<endl;
    cout<<"\n";
  }
};
int main (){
vector<shared_ptr<Vagabundos>> sinhogar;
sinhogar.push_back(make_shared<Vagabundos>(40, "Juan", 8));
sinhogar.push_back(make_shared<Vagabundos>(29, "Pancracio", 3));
sinhogar.push_back(make_shared<Vagabundos>(56, "Adolfo", 1945));

for(auto& aunsinhogar : sinhogar){
aunsinhogar -> humillarse();
}
return  0;

}