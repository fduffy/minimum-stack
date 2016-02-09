

// stack code intended to be used
// for experiments involving
// the stack data structure

#include<vector>
using namespace std;

template<class T,int capacity = 30>
class Stack
{
public:
    Stack() {
    pool.reserve(capacity);
    minimum.reserve(capacity);
    top = -1;
    }
    void clear() {
        pool.clear();
    }
    bool isEmpty() const {
        return pool.empty();
    }
    T& topEl() {
        return pool.back();
    }
    T pop() {
        T el = pool.back();
        top--;
        pool.pop_back();

        if(el == minimum.back())
            minimum.pop_back();

        return el;
    }
    void push(const T& el) {
        pool.push_back(el);

        if(el <= minimum.back())
            minimum.push_back(el);

        top++;
    }
    T& minElement() {
        return minimum.back();
    }

private:
    vector<T> pool;
    vector<T> minimum;
    int top;
};


