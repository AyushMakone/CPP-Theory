#include <iostream>
using namespace std;

class cricker {
  public:
  void Cricker(){
    cout<<"I am a Cricker"<<endl;
  }
};
class summit: public cricker {
  public:
  void Summit (){
    cout<<"My name is Summit"<<endl;
  }
  
};
class engerner:public summit{
  public:
  void Engerner(){
    cout<<"I am a also engerner in oracle"<<endl;
  }
  
};

int main() 
{
    engerner e1;
    e1.Cricker();
    e1.Summit();
    e1.Engerner();
    return 0;
}