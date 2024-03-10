#include <iostream>
#include <vector>

class Solution299 {
public:
   std::string getHint(std::string secret, std::string guess) {
       std::vector<int> secvec(10);
       std::vector<int> gueVec(10);
        int buls = 0;
        int length = secret.length();
        for (int i = 0; i < length; i++) {
            if (secret[i] == guess[i]) {
                buls ++;
                secret[i] = 'p';
                guess[i] = 'p';
            } else {
                ++secvec[secret[i] - '0'];
                ++gueVec[guess[i] - '0'];
            }
        }
        int cow {0};
        for (int i = 0; i < 10; i++) {
            cow += std::min(secvec[i], gueVec[i]);
        }

        return std::to_string(buls) + "A" + std::to_string(cow) + "B";
    }
};