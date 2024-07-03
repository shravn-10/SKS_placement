// Write a program that converts a given number of seconds into hours, minutes, and remaining seconds.
// The program takes an integer representing the total number of seconds as input and outputs the converted time in the format "HH:MM:SS".

class Solution {
public:
    static void convertSeconds(int seconds) {
     if (seconds < 0 || seconds > 86399) {
            std::cout << "Invalid input. Seconds should be between 0 and 86399." << std::endl;
            return;
        }
        
        int hours, minutes, remaining_seconds;
        
        hours = seconds / 3600;         
        remaining_seconds = seconds % 3600;
        minutes = remaining_seconds / 60;  
        remaining_seconds %= 60;        
        
        
        printf("%02d:%02d:%02d\n", hours, minutes, remaining_seconds);
    }
};
