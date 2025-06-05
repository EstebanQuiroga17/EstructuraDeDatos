#ifndef HANOITOWER_H
#define HANOITOWER_H

#include <vector>
#include <string>
#include <iostream>

class HanoiTower {
private:
    std::vector<int> beginningTower, auxiliarTower, endingTower;
    int numDisks;

    void printTowers();
    void moveDisks(int n, std::vector<int>& from, std::vector<int>& to, std::vector<int>& aux,
                   char fromName, char toName, char auxName);

public:
    HanoiTower(int n);
    void solve();
};

#endif

