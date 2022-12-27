#include <cassert>
#include "rubber_vector.h"

using namespace std;

void test_rubber_vector_ops() {
    rubber_vector<int> v;
    v[10] = 100;
    for (int i = 0; i < 10; i ++) {
        assert(v[i] == 0);
    }
    assert(v[10] == 100);
    assert(v.size() == 11);
    v[42] = 13;
    assert(v[42] == 13);
    assert(v.size() == 43);
    v[13] = 13;
    assert(v[13] == 13);
    assert(v.size() == 43);

    const rubber_vector<int> &v2 = v;
    assert(!v2.empty());
    assert(v2.size() == 43);
    assert(v2[42] == 13);
    assert(v2[123] == 0);
}

void test_rubber_vector_clear() {
    rubber_vector<int> v;
    v[112] = 100;
    assert(!v.empty());

    v.clear();
    assert(v.empty());

    v.clear();
    assert(v.empty());
}

void test_rubber_vector_default_value() {
    rubber_vector<int> v;
    assert(v.empty());
    assert(v[12314214] == 0);

    rubber_vector<int> v1(40);
    assert(v1.size() == 40);
    for (int i = 0; i < 40; i++) {
        assert(v1[i] == 0);
    }

    rubber_vector<int> v2(40, -30);
    for (int i = 0; i < 40; i++) {
        assert(v2[i] == -30);
    }
}

void test_rubber_vector() {
    test_rubber_vector_ops();
    test_rubber_vector_clear();
    test_rubber_vector_default_value();
}

int main() {
    test_rubber_vector();

}
