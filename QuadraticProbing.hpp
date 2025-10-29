#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class QuadraticProbing : public HashTableClosed<T> {
public:
    explicit QuadraticProbing(int size = 101)
        : HashTableClosed<T>(size) {}

    int probeIndex(const T& key, int i) const override {
        // TODO: Implement quadratic probing
        return 0;
    }

    int insert(const T& key) override {
        // TODO: Implement quadratic probing
        return 0;
    }

    pair<bool, int> search(const T& key) const override {
        // TODO: Implement quadratic probing
        return {false, 0};
    }
};
