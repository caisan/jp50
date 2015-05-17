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

    Letter::~Letter(){
    }

    void Letter::display(){
        cout << this->first << "," << this->second << "," << this->roman
             << "("<< this->num_of_good<<"/"<<this->num_of_wrong << ")"<< endl;

    }

    std::string Letter::get_first(){
        return this->first;
    }

    std::string Letter::get_second(){
        return this->second;
    }

    std::string Letter::get_roman(){
        return this->roman;
    }

    void Letter::test_first(){
        std::string tmp;
        cout << this->second << " 的平假名是: " << endl;
        cin >> tmp;

        if(tmp == this->first){
            cout << "回答正确." << endl;
            this->num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << this->first << endl;
            this->num_of_wrong += 1;
        }
    }

    void Letter::test_second(){
        std::string tmp;

        cout << this->first << " 的片假名是: " << endl;
        
        cin >> tmp;
        
        if(tmp == second){
            cout << "回答正确." << endl;
            this->num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << this->second << endl;
            this->num_of_wrong += 1;
        }
    }

    void Letter::test_roman(){

        std::string tmp;
        
        cout << this->roman << " 的平假名是: " << endl;
        cin >> tmp;

        if(tmp == this->first){
            cout << "回答正确." << endl;
            this->num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << this->first << endl;
            this->num_of_wrong += 1;
        }
        
        cout << this->roman << " 的片假名是: " << endl;

        cin >> tmp;

        if(tmp == this->second){
            cout << "回答正确." << endl;
            this->num_of_good += 1;
        } else {
            cout << "回答错误，正确答案是: " << this->second << endl;
            this->num_of_wrong += 1;
        }

    }


} // namespace jp50



