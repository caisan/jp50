/*
 * Letter.hpp
 *
 * Author: LeslieZhu
 */

#ifndef LETTER_HPP_
#define LETTER_HPP_

#include <iostream>

namespace jp50 {

    class Letter{

    public:
        Letter(std::string first,std::string second,std::string roman):
            first(first),second(second),roman(roman),num_of_good(0),num_of_wrong(0){}
        
        virtual ~Letter();

        void display();

        std::string get_first();
        std::string get_second();
        std::string get_roman();

        void test_first();
        void test_second();
        void test_roman();

    private:
        std::string first;        // 平假名
        std::string second;        // 片假名
        std::string roman;        // 罗马字母拼音
        int num_of_good;
        int num_of_wrong;
    };                          // class Letter



} // namespace jp50




#endif /* LETTER_HPP_ */
