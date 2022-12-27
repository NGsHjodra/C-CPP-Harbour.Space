//
// Created by mike on 12/21/2022.
//

#ifndef ARRAY_MAP_ARRAY_MAP_H
#define ARRAY_MAP_ARRAY_MAP_H


#include <cstdlib>
#include <vector>

template<typename K, typename V>
class array_map {
public:
    [[nodiscard]] size_t size() const;

    [[nodiscard]] bool empty() const;

    [[nodiscard]] size_t count(K key) const;

    V operator[](K key) const;

    V &operator[](K key);

    void clear();

    size_t erase(K key);

private:
    std::vector<K> keys;
    std::vector<V> values;
};

template<typename K, typename V>
size_t array_map<K, V>::erase(K key) {
    int index = 0, remove_cnt = 0;
    for (const auto &key_: keys) {
        if (key == key_) {
            values.erase(values.begin() + index);
            keys.erase(keys.begin() + index);
            remove_cnt++;
        }
        index++;
    }
    return remove_cnt;
}

template<typename K, typename V>
void array_map<K, V>::clear() {
    keys.clear();
    values.clear();
}

template<typename K, typename V>
size_t array_map<K, V>::size() const {
    return keys.size();
}

template<typename K, typename V>
bool array_map<K, V>::empty() const {
    return keys.empty();
}

template<typename K, typename V>
size_t array_map<K, V>::count(K key) const {
    return std::find(keys.begin(), keys.end(), key)
           == keys.end() ? 0 : 1;
}

template<typename K, typename V>
V array_map<K, V>::operator[](K key) const {
    int index = 0;
    for (const auto &key_: keys) {
        if (key == key_) {
            return values[index];
        }
        index++;
    }
    return V();
}

template<typename K, typename V>
V &array_map<K, V>::operator[](K key) {
    int index = 0;
    for (const auto &key_: keys) {
        if (key == key_) {
            return values[index];
        }
        index++;
    }
    keys.push_back(key);
    values.push_back(V());
    return values.back();
}

#endif //ARRAY_MAP_ARRAY_MAP_H
