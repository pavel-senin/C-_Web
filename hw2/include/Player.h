#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(const std::string& name);
    const std::string& getName() const;
    int takeMatches(int maxMatches) const;

private:
    std::string name;
};

#endif
