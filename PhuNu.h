#ifndef PHU_NU_H
#define PHU_NU_H
#pragma once
#include <string>

class PhuNu
{
    public:
        PhuNu(); // default constructor
        PhuNu(const std::string& ho_ten, const int& tuoi, bool con_zin); // custom constructor
        ~PhuNu(); // custom destructor
        void trang_diem();
        virtual std::string choi_nhac_cu(std::string nhac_cu); // #4 polymorphism: overriding (virtual)
        void va_zin();
        void show_hang();
        
    // #1 encapsulation: all property is private
    private:
        // property
        std::string ho_ten_;
        int tuoi_;
        bool con_zin_;
};

#include "PhuNu.cpp"

#endif