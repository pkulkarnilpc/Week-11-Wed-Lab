#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class QuadraticProbing : public HashTableClosed<T> {
public:
    explicit QuadraticProbing(int size = 101)
        : HashTableClosed<T>(size) {}

    // TODO: Implement quadratic probing
    int probeIndex(const T& key, int i) const override {
        return 0;
    }

    int insert(const T& key) override {
        return 0;
    }

    pair<bool, int> search(const T& key) const override {
        return {false, 0};
    }
};
