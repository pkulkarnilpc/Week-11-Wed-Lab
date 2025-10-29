#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class HashTableClosed {
protected:
    vector<T> table;
    vector<bool> occupied;
    int M; // table size
    int N; // number of elements

public:
    explicit HashTableClosed(int size = 101)
        : M(size), N(0) {
        table.resize(M);
        occupied.assign(M, false);
    }

    virtual ~HashTableClosed() = default;

    // Students implement: returns the index for the i-th probe
    virtual int probeIndex(const T& key, int i) const = 0;

    // Students implement: insert key into table, return number of probes
    virtual int insert(const T& key) = 0;

    // Students implement: search key, return {found, probes}
    virtual pair<bool, int> search(const T& key) const = 0;

    void display() const {
        cout << "Hash Table (size=" << M << ")\n";
        for (int i = 0; i < M; i++) {
            cout << i << ": ";
            if (occupied[i]) cout << table[i];
            else cout << "-";
            cout << "\n";
        }
    }

    int size() const { return M; }
    int count() const { return N; }
    double loadFactor() const { return static_cast<double>(N)/M; }
};
