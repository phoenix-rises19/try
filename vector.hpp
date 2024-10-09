#include <iostream>

namespace vai {

    template <typename T>
    class vector {

    public:
        using data_t = T;

        vector(){
            arr_=reinterpret_cast<T*>(new char[capacity_*sizeof(T)]);

        }

        vector(size_t capacity) {
            arr_=reinterpret_cast<T*>(new char[capacity*sizeof(T)]);
            capacity_(capacity);
            size_(capacity);
        }


        //lets make copy constructor
        vector(vector&o):
            arr_(o.arr_),
            capacity_(o.capacity_),
            size_(o.size_){}

        //lets make move constructor
        vector(vector&&o) {
            arr_(o.arr_);
            capacity_(o.capacity_);
            size_(o.size_);
            delete[] o.arr_;
            o.capacity_ = 0;
            o.size_ = 0;
        }

        //operators overloading for copy and move operator


        ~vector() {

            std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
            // delete arr_;
        }

        void push_back(data_t data) {

            if (size_ == capacity_) {
                resize();
            }
            arr_[size_] = data;
            ++size_;
        }

        void emplace_back(data_t& data) {}

        void resize() {
            data_t* new_arr = new data_t[capacity_ * 2];
            for (size_t i = 0; i < size_; i++) {
                new_arr[i] = arr_[i];
            }
            delete[] arr_;
            arr_= new_arr;
        }

        void pop_back() {
            if (size_ == 0) {
                return;
            }
            --size;
        }

        T& operator[](std::size_t index) {
            return arr_[index];
        }
        vector& operator=(vector& o) {
            arr_ = o.arr_;
            capacity_ = o.capacity_;
            size_ = o.size_;
            return *this;
        }
        vector& operator=(vector&& o) {
            arr_ = o.arr_;
            capacity_ = o.capacity_;
            size_ = o.size_;
            delete[] o.arr_;
            o.capacity_ = 0;
            o.size_ = 0;
            return *this;
        }

        data_t& at(std::size_t idx) {
            return arr_[idx];
        }

        data_t& front() {
            return arr_[0];
        }

        data_t& back() {
            return arr_[size_ - 1];
        }

        [[nodiscard]] std::size_t size() const {
            return size_;
        }

        //operators
        bool operator==(vector v){
            if (size_ != v.size_) {
                return false;
            } else {
                for (size_t i = 0; i < size_; i++) {
                    if(v.arr_[i] != arr_[i]) {
                        return false;
                    }
                }
            }
            return true;
        }
        bool operator!=(vector v) {
            return !(*this == v);
        }
        bool operator<(vector v) {

        }

    private:
        data_t* arr_;
        std::size_t capacity_;
        std::size_t size_;
    };
}