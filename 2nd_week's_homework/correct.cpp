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