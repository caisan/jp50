#ifndef _SPTEST_HPP_
#define _SPTEST_HPP_

#include "Letter.hpp"

namespace jp50 {
    
    class JPTest{
        
    public:
        JPTest();
        virtual ~JPTest();

        void init_letters();

        void test_letters();
        void test_rows();
        void test_columns();

        void result();

    private:
        Letter* letters[50];
    };                          /* class JPTest */

} /* namespace jp50 */

#endif
