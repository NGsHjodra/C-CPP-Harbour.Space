#include <iostream>
#include <cassert>
#include "array_map.h"

void test_array_map_clear();

void test_array_map() {
    array_map<int, int> m1;
    assert(m1.empty());
    assert(m1.size() == 0);
    assert(m1.count(42) == 0);
    assert(m1[42] == 0);
    assert(!m1.empty());
    assert(m1.size() == 1);
    assert(m1.count(42) == 1);
    m1[42] = 1;
    assert(m1[42] == 1);
    assert(!m1.empty());
    assert(m1.size() == 1);
    assert(m1.count(42) == 1);
    assert(m1.count(1) == 0);
    m1[42] = 2;
    assert(m1[42] == 2);
    assert(!m1.empty());
    assert(m1.size() == 1);
    assert(m1.count(42) == 1);
    assert(m1.count(1) == 0);
    m1[1] = 3;
    assert(m1[1] == 3);
    assert(m1[42] == 2);
    assert(!m1.empty());
    assert(m1.size() == 2);
    assert(m1.count(42) == 1);
    assert(m1.count(1) == 1);
    assert(m1.count(0) == 0);

    const array_map<int, int> m2 = m1;
    assert(m2[1] == 3);
    assert(m2[42] == 2);
    assert(!m2.empty());
    assert(m2.size() == 2);
    assert(m2.count(42) == 1);
    assert(m2.count(1) == 1);
    assert(m2.count(0) == 0);
    assert(m2[0] == 0);
    assert(m2.size() == 2);
    assert(m2.count(42) == 1);
    assert(m2.count(1) == 1);
    assert(m2.count(0) == 0);

    array_map<std::string, std::string> m3;
    assert(m3["test"] == "");
    m3["test"] = "val";
    assert(m3["test"] == "val");
}

void test_array_map_clear() {
    array_map<std::string, std::string> m;
    m["test"] = "val";
    m.clear();
    assert(m.empty());
    m.clear();
    assert(m.empty());
    assert(m["test"] == "");
    m["test"] = "valfwt";
    m["test2"] = "valsrt";
    m["test3"] = "valsrta";
    m["test4"] = "valsrat";
    m["test5"] = "valtasfdw";
    m["test6"] = "vawfdwfd";
    assert(!m.empty());
    m.clear();
    assert(m.empty());
    assert(m["test"] == "");
}

void test_array_map_erase() {
    array_map<std::string, std::string> m;
    m["test"] = "val";
    m["test2"] = "val2";
    m["test3"] = "val3";
    m["test4"] = "val4";
    assert(m.erase("test") == 1);
    assert(m["test"] == "");
    assert(m.erase("test") == 0);
    assert(m.size() == 3);

    array_map<std::string, std::string> m1;
    m1["test"] = "val";
    m1["test2"] = "val2";
    m1["test324"] = "val23";
    m1["test234"] = "val2342";
    m1["test536"] = "valfwp";
    m1["test5437"] = "val2wfp";

    assert(m1.erase("somerandomtext0000") == 0);
    assert(m1.size() == 6);

    assert(m1.erase("test") == 1);
    assert(m1.erase("test2") == 1);
    assert(m1.erase("test324") == 1);
    assert(m1.size() == 3);

    assert(m1.erase("test234") == 1);
    assert(m1.erase("test536") == 1);
    assert(m1.erase("test5437") == 1);
    assert(m1.empty());
}

int main() {
    test_array_map();
    test_array_map_clear();
    test_array_map_erase();
}


