#include<iostream>
#include <vector>

#define BIT_INVERT_OK 0
#define BIT_INVERT_WRONG_SZ -1
#define BIT_INVERT_NULLPTR -2
#define BIT_INVERT_NO_TEMPLATE -3

int bitInvert(uint8_t* ptr, int size, std::vector<bool> bits_template) {
    if (!ptr)
        return BIT_INVERT_NULLPTR;

    if (size <= 0)
        return BIT_INVERT_WRONG_SZ;

    if (bits_template.empty())
        return BIT_INVERT_NO_TEMPLATE;

    auto biter = bits_template.begin();
    for (int i = 0; i < size; i++) {
        for (uint8_t j = 0; j < 8; j++) {
            if (*biter)
                ptr[i] = ptr[i] ^ (1 << (7-j));
            biter++;
            if (biter == bits_template.end())
                biter = bits_template.begin();
        }
    }
    return BIT_INVERT_OK;
}

int main() {
    const int l = 4;
    uint8_t A[l] = {0b00101011, 0b11010100, 0b11011011, 0b00100100};
    std::vector<bool> mask = {1, 1, 0, 1, 1, 0, 1, 1};

    bitInvert(A, l, mask);

    for(int i = 0; i < l; i++) {
        for(int j = sizeof(uint8_t) * 8 - 1; j >= 0; j--) {
            std::cout << ((A[i] >> j) & 1);
        }
    std::cout << " ";
  }
  std::cout << "\n";

  return 0;
}