//
// Created by niyak on 12/23/2022.
//

#ifndef RUBBERVECTOR_RUBBER_VECTOR_H
#define RUBBERVECTOR_RUBBER_VECTOR_H

#include <vector>
#include <cstdlib>

template<typename T>
class rubber_vector {
public:
    rubber_vector() = default;

    explicit rubber_vector(size_t size, T value = T());

    T operator[](size_t index) const;

    T &operator[](size_t index);

    [[nodiscard]] size_t size() const;

    [[nodiscard]] bool empty() const;

    void clear();

private:
    std::vector<T> items;
};

template<typename V>
rubber_vector<V>::rubber_vector(size_t size, V value): items(size, value) {
    // No operations.
}

template<typename V>
V rubber_vector<V>::operator[](size_t index) const {
    if (index < items.size())
        return items[index];
    return V();
}

template<typename V>
V &rubber_vector<V>::operator[](size_t index) {
    if (index >= items.size()) {
        items.resize(index + 1);
    }
    return items[index];
}

template<typename V>
size_t rubber_vector<V>::size() const {
    return items.size();
}

template<typename V>
bool rubber_vector<V>::empty() const {
    return items.empty();
}

template<typename V>
void rubber_vector<V>::clear() {
    items.clear();
}


#endif //RUBBERVECTOR_RUBBER_VECTOR_H
