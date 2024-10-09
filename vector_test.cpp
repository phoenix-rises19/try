#include "vector.hpp"

#include <cstddef>
#include <iostream>
#include <cstring>

class dmem {
public:
    explicit dmem(std::size_t sz):
        sz_(sz),
        mem_(new char[sz]) {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
    }

    explicit dmem(const dmem& obj):
        sz_(obj.sz_),
        mem_(new char[sz_]) {

        std::memcpy(mem_, obj.mem_, sz_);
    }

    virtual ~dmem() {
        std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
        delete[] mem_;
    }

private:
    std::size_t sz_;
    char* mem_;
};


void add();


int main(int argc, char* argv[]) {

    dmem obj(100);

    vai::vector<dmem> dmemVec;
    dmemVec.push_back(obj);
    return 0;
}