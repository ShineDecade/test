#ifndef _PhanSo_h
#define _PhanSo_h

#include <iostream>

class PhanSo {
private:
    int tu, mau;

public:
    // Constructors
    PhanSo();
    PhanSo(int tu, int mau);

    // Phép toán cộng
    PhanSo operator+(const PhanSo& other) const;

    // Phép toán +=
    PhanSo& operator+=(const PhanSo& other);

    // Phép toán ++ (tiền tố)
    PhanSo& operator++();

    // Phép gán từ int
    PhanSo& operator=(int value);

    // Xuất phân số ra màn hình
    friend std::ostream& operator<<(std::ostream& os, const PhanSo& ps);
};

#endif
