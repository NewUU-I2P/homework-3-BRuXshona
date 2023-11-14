#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    if(macAddress[0] == 'F' and macAddress[1] == 'F'){
        return "Broadcast";
    }else{
        switch(macAddress[1]){
            case 'A':
                return "Unicast";
                break;
            case 'B':
                return "Multicast";
                break;
            case 'C':
                return "Unicast";
                break;
            case 'D':
                return "Multicast";
                break;
            case 'E':
                return "Unicast";
                break;
            case 'F':
                return "Multicast";
                break;
            default:
                if((macAddress[1] - '0') % 2 == 0){
                    return "Unicast";
                }else {
                    return "Multicast";
                }
        }
    }
    // make use of control flow statements
    // return result;
}
