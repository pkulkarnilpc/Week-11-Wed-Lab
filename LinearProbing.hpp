#pragma once
#include "HashTableClosed.hpp"

template <typename T>
class LinearProbing : public HashTableClosed<T> {
private:
    int skip; // skip factor
public:
    explicit LinearProbing(int size = 101, int skipFactor = 3)
        : HashTableClosed<T>(size), skip(skipFactor) {}

    // TODO: Implement linear probing with skip
    int probeIndex(const T& key, int i) const override {
        // Students should implement
        return 0;
    }

    int insert(const T& key) override {
        // TO DO
        return 0;
    }

    pair<bool, int> search(const T& key) const override {
        // TO DO
        return {false, 0};
    }
};
