//
// Created by niyak on 12/23/2022.
//

#ifndef ARRAY_MAP_RUBBER_VECTOR_H
#define ARRAY_MAP_RUBBER_VECTOR_H


#include <vector>

template<typename E>
class rubber_vector {
public:
    [[nodiscard]] size_t size() const;
    [[nodiscard]] bool empty() const;
    void clear();
    E operator[](size_t ind) const;
    E &operator[](size_t ind);
private:
    std::vector<E> rub_vec;
};

template<typename E>
E &rubber_vector<E>::operator[](size_t ind) {
    if (ind > rub_vec.size())
        return E();
    return rub_vec[ind];
}

template<typename E>
E rubber_vector<E>::operator[](size_t ind) const {
    if (ind <= rub_vec.size())
        return rub_vec[ind];
    return E();
}

template<typename E>
void rubber_vector<E>::clear() {
    rub_vec.clear();
}

template<typename E>
bool rubber_vector<E>::empty() const{
    return rub_vec.empty();
}

template<typename E>
size_t rubber_vector<E>::size() const{
    return rub_vec.size();
}


#endif //ARRAY_MAP_RUBBER_VECTOR_H
