#include "../Model/HanoiTower.h"

HanoiTower::HanoiTower(int n) {
    numDisks = n;
    for (int i = n; i >= 1; i--)
        beginningTower.push_back(i);
}

void HanoiTower::printTowers() {
    auto print = [](const std::vector<int>& peg, char name) {
        std::cout << name << ": ";
        for (int disk : peg)
            std::cout << disk << " ";
        std::cout << "\n";
    };

    print(beginningTower, 'B');
    print(auxiliarTower, 'A');
    print(endingTower, 'E');
    std::cout << "----------------------\n";
}

void HanoiTower::moveDisks(int n, std::vector<int>& from, std::vector<int>& to, std::vector<int>& aux,
                           char fromName, char toName, char auxName) {
    if (n == 1) {
        to.push_back(from.back());
        from.pop_back();
        printTowers();
        return;
    }

    moveDisks(n - 1, from, aux, to, fromName, auxName, toName);
    moveDisks(1, from, to, aux, fromName, toName, auxName);
    moveDisks(n - 1, aux, to, from, auxName, toName, fromName);
}

void HanoiTower::solve() {
    printTowers();
    moveDisks(numDisks, beginningTower, endingTower, auxiliarTower, 'B', 'E', 'A');
}



