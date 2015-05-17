/*
 * Letter.cpp
 *
 * Author: LeslieZhu
 */

#include "Letter.hpp"

using std::cout;
using std::endl;
using std::cin;


namespace jp50 {

    Letter::Letter(std::string first,std::string second,std::string roman):
        first(first),second(second),roman(roman),num_of_good(0),num_of_wrong(0){}

    Letter::~Letter(){
    }

    void Letter::display(){
        cout << first << "," << second << "," << roman
             << "("   << num_of_good << "/" << num_of_wrong << ")" << endl;

    }

    std::string Letter::get_first(){
        return first;
    }

    std::string Letter::get_second(){
        return second;
    }

    std::string Letter::get_roman(){
        return roman;
    }

    void Letter::test_first(){
        std::string tmp;
        cout << second << " 的平假名是: " << endl;
        cin >> tmp;

        if(tmp == first){
            cout << "回答正确." << endl;
            num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << first << endl;
            num_of_wrong += 1;
        }
    }

    void Letter::test_second(){
        std::string tmp;

        cout << first << " 的片假名是: " << endl;
        
        cin >> tmp;
        
        if(tmp == second){
            cout << "回答正确." << endl;
            num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << second << endl;
            num_of_wrong += 1;
        }
    }

    void Letter::test_roman(){

        std::string tmp;
        
        cout << roman << " 的平假名是: " << endl;
        cin >> tmp;

        if(tmp == first){
            cout << "回答正确." << endl;
            num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << first << endl;
            num_of_wrong += 1;
        }
        
        cout << roman << " 的片假名是: " << endl;

        cin >> tmp;

        if(tmp == second){
            cout << "回答正确." << endl;
            num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << second << endl;
            num_of_wrong += 1;
        }

    }


} // namespace jp50



