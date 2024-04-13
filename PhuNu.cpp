#include "PhuNu.h"
#include <iostream>

PhuNu::PhuNu() {};

// defaul parameter: con_zin = true
// constructor initialisation list: hoten_(ho_ten)
// reference: const std::string& ho_ten
PhuNu::PhuNu(const std::string& ho_ten, const int& tuoi, bool con_zin = true) : ho_ten_(ho_ten), tuoi_(tuoi), con_zin_(con_zin) {};

PhuNu::~PhuNu()
{
    std::cout << "Chia tay " << ho_ten_ << std::endl;
};

void PhuNu::trang_diem() {};

std::string PhuNu::choi_nhac_cu(std::string nhac_cu)
{
    return "AAAAA...";
};

void PhuNu::va_zin() // #2: modify property is private through method
{
    if (tuoi_ < 25)
    {
        con_zin_ = true;
    };
};

void PhuNu::show_hang()
{
    // short hand if-else (ternary operator)
    std::cout << ho_ten_ << " " << (con_zin_ ? "con zin" : "mat zin") << std::endl;
};