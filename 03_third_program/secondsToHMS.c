/*program converts the given number of seconds to hours minutes and seconds
    
    65 seconds --> 0 hours
    3695 seconds --> 1 hour 1 minute 35 seconds


*/

 #include <stdio.h>


 int main(void){

    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;
    int remaining_minutes = 0;


    //get the number of seconds
    puts("Enter the number of seconds:");
    scanf("%d", &seconds);

    //calculate the number of minutes

    
    minutes = seconds/60;
    remaining_seconds = seconds % 60;

    hours = minutes/60;
    remaining_minutes = minutes % 60;

    


    printf("%d seconds is ", seconds);
    printf("%d hours is ", hours);
    printf("%d minutes and %d seconds\n", remaining_minutes, remaining_seconds);
    



    return 0;
 }