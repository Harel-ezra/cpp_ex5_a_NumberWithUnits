#pragma once
#include <string>
#include <iostream>
#include <fstream>

namespace ariel
{
    class NumberWithUnits
    {
    private:
        int number;
        std::string str;

    public:
        //constructor
        NumberWithUnits(int n, std::string s)
            : number(n), str(s)
        {
        }
        //distractor
        ~NumberWithUnits()
        {
        }
        static void read_units(std::ifstream& file);

        //matemtic operator +
        //
        NumberWithUnits operator+(const NumberWithUnits &other) const;
        NumberWithUnits operator+=(const NumberWithUnits &other);
        NumberWithUnits &operator+() const;
        // -
        NumberWithUnits operator-(const NumberWithUnits &other) const;
        NumberWithUnits operator-=(const NumberWithUnits &other);
        const NumberWithUnits &operator-() const ;

        //comper operator
        bool operator==(const NumberWithUnits &other) const;
        bool operator!=(const NumberWithUnits &other) const;

        const NumberWithUnits &operator<=(const NumberWithUnits &other) const;
        const NumberWithUnits &operator>=(const NumberWithUnits &other) const;
        const NumberWithUnits &operator<(const NumberWithUnits &other) const;
        const NumberWithUnits &operator>(const NumberWithUnits &other) const;

        //perfix\postfix
        NumberWithUnits &operator++();
        NumberWithUnits &operator++(int dummy_flag_for_postfix_increment);

        NumberWithUnits &operator--();
        NumberWithUnits &operator--(int dummy_flag_for_postfix_increment);
        // multi
        friend NumberWithUnits &operator*(const double n, NumberWithUnits& number);
        //input output

        friend std::ostream &operator<<(std::ostream &output, const NumberWithUnits &n);
        friend std::istream &operator>>(std::istream &input,  NumberWithUnits &n);
    };

}