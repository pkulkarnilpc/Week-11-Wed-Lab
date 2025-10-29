#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class DoubleHashing : public HashTableClosed<T> {
public:
    explicit DoubleHashing(int size = 101)
        : HashTableClosed<T>(size) {}

    int hash2(const T& key) const {
        return 7 - (static_cast<int>(key) % 7);
    }

    int probeIndex(const T& key, int i) const override {
        // TODO: Implement double hashing
        return 0;
    }

    int insert(const T& key) override {
        // TODO: 
        return 0;
    }

    pair<bool, int> search(const T& key) const override {
        // TODO: 
        return {false, 0};
    }
};
