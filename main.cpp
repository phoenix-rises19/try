#include<iostream>
class Nation{
    public:
    virtual ~Nation() = default;

      void boundary() {
            std::cout<<__PRETTY_FUNCTION__<<":"<<__LINE__<<std::endl;
        }
};

class State: public Nation{
    public:
    ~State() override = default;
        void boundary()  {
            std::cout<<__PRETTY_FUNCTION__<<":"<<__LINE__<<std::endl;
        }
};

class City: public Nation{
    public:
    ~City() override = default;
        void boundary()  {
            std::cout<<__PRETTY_FUNCTION__<<":"<<__LINE__<<std::endl;
        }
};

int main() {
    auto* nation= new Nation;
    nation->boundary();
    Nation* state= new State;
    state->boundary();
    /*auto city= new City;
    city->boundary();*/

    delete nation;
  /*  delete state;
    delete city;*/

    return 0;

}