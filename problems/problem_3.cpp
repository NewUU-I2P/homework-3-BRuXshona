#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if(S == 'M'){
        if (height >= 185){
            return "Tall";
        }else if (height < 170){
            return "Short";
        }else {
            return "Normal";
        }
    }else {
        if (height >= 175){
            return "Tall";
        }else if (height < 160){
            return "Short";
        }else {
            return "Normal";
        }
    }
    // use return to return your result
    // make use of control flow statements
}