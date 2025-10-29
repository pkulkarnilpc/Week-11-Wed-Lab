#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class DoubleHashing : public HashTableClosed<T> {
public:
    DoubleHashing(int size = 101)
        : HashTableClosed<T>(size) {}

    int hash2(const T& key) const {
        return 7 - (static_cast<int>(key) % 7);
    }

    int probeIndex(const T& key, int i) const override {
        // TODO: Implement double hashing
        return 0;
    }
 };
