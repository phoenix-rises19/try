#include <iostream>
#include <vector>

/*class Instrument {
public:
    int idx;
    char name;
    int *data;

    explicit Instrument(int i): idx(i), name('\0'), data(nullptr) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
    }

    Instrument(int i, char n): idx(i), name(n), data(new int(i)) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
    }

    explicit Instrument(const Instrument &i): idx(i.idx), name(i.name), data(new int(i.data[0])) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ <<" ";
        std::cout<<i.name<<std::endl;
    }

    Instrument(Instrument &&i): idx(i.idx), name(i.name), data(i.data) {
        i.idx = 0;
        i.name = 'X';
        i.data = NULL;
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
    }

    ~Instrument() {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ <<" ";
        std::cout<<name<<std::endl;
    }

    Instrument &operator=(const Instrument &i) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
        return *this;
    }

    Instrument &operator=(Instrument &&i) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
        return *this;
    }
};

int main() {
    Instrument o1(1,'a');
    Instrument o2(2,'b');
    Instrument o3(3,'c');
    std::vector<Instrument> v;
    std::cout<<v.capacity()<<std::endl;
    v.push_back(o1);
    std::cout<<v.capacity()<<std::endl;

    v.push_back(o2);
    std::cout<<v.capacity()<<std::endl;

    v.push_back(o3);
    std::cout<<v.capacity()<<std::endl;

    return 0;

}

int main1() {

    Instrument o1(2, 'f');
    Instrument o2(3, 'j');
    Instrument s1(2);
    s1 = o2;

    return 0;
}*/
