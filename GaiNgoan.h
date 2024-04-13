#ifndef GAI_NGOAN_H
#define GAI_NGOAN_H
#pragma once
#include "PhuNu.h"

class GaiNgoan : public PhuNu
{
    public:
        GaiNgoan();
        GaiNgoan(const std::string& ho_ten, const int& tuoi, bool con_zin);
        std::string choi_nhac_cu(std::string nhac_cu);
        void noi_tro();
};

#include "GaiNgoan.cpp"

#endif