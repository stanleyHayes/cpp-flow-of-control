#include <iostream>

int main() {

    //lift off
    //user enter a number
    //count down from the number till 0 using a while loop
    int start;
    std::cout << "enter your starting number: ";
    std::cin >> start;
    while (start >= 0){
        std::cout << start << std::endl;
        start--;
    }
    std::cout << "Lift off Boom" << std::endl;

    /*
     * while loop
     * syntax
     *
     * while(boolean expression);
     *      statement
     *
     * while(boolean expression){
     *      statements here
     * }
     * */

    /*
     * do while statement
     *
     * do
     *      statement
     * while(boolean expression);
     *
     * do{
     *      statements
     * }while(boolean expression);
     * */
    /*
     * conditional operator
     * variable = (boolean expression) ? return if boolean expression is true: returned if boolean expression is false;
     *
     * */

//    int a = 9;
//    int b = 8;
//    int max;
//    if (a > b)
//        max = a;
//    else
//        max = b;
//
//    max = (a > b) ? a: b;
//
//    printf("the max of %d and %d is %d", a, b, max);
//    /*
//     * enum ENUM_NAME {ENUM_VALUES}
//     * */
//    enum DAYS_OF_THE_WEEK {
//        MONDAY = 2,
//        TUESDAY ,
//        WEDNESDAY,
//        THURSDAY,
//        FRIDAY,
//        SATURDAY,
//        SUNDAY = 1
//    };
//
//    DAYS_OF_THE_WEEK sabbath;
//    sabbath = SUNDAY;
//    std::cout << "Sabbath day for sun worshippers is " << sabbath << std::endl;

//    int vehicleClass;
//    double toll;
//    std::cout << "Enter vehicle class: ";
//    std::cin >> vehicleClass;
//
//    switch (vehicleClass) {
//        case 1:
//            std::cout << "Passenger car.";
//            toll = 0.05;
//            break;
//
//        case 2:
//            std::cout << "Bus.";
//            toll = 1.50;
//            break;
//
//        case 3:
//            std::cout << "Truck.";
//            toll = 2.00;
//            break;
//
//        default:
//            toll = 0.00;
//            std::cout << "Unknown vehicle class!";
//    }
//
//    std::cout << "\nYour toll fee is " << toll << " GHS";

    /*
     * switch statement syntax
     *
     * switch(controlling expression){
     *      case CONSTANT_1:
     *
     *          break;
     *      case CONSTANT_2:
     *
     *
     *          break;
     *
     *      default:
     *
     * }
     * */

    /*
     * Write an if-else statement that outputs the word Warning provided that either the value
     * of the variable temperature is greater than or equal to 100, or the value of the variable
     * pressure is greater than or equal to 200, or both.
     * Otherwise, the if-else statement outputs the word OK.
     * The variables temperature and pressure are both of type int
     * */

//    int temperature;
//    int pressure;
//    std::cout << "Enter the temperature: ";
//    std::cin >> temperature;
//    std::cout << std::endl;
//
//    std::cout << "Enter the pressure: ";
//    std::cin >> pressure;
//    std::cout << std::endl;
//
//    if(temperature >= 100 || pressure >= 200)
//        std::cout << "Warning";
//    else
//        std::cout << "OK";
    /*
     * Write an if-else statement that outputs the word
     * Passed provided the value of the variable exam is greater than or equal to 60
     * and also the value of the variable programsDone is greater than or equal to 10.
     * Otherwise, the if-else statement outputs the word Failed.
     * The variables exam and programsDone are both of type int
     * */

//    int programsDone;
//    int exam;
//    std::cout << "Enter your exam score: ";
//    std::cin >> exam;
//    std::cout << std::endl;
//    std::cout << "How many programs have you written? : ";
//    std::cin >> programsDone;
//    std::cout << std::endl;
//
//    if (exam >= 60 && programsDone >= 10)
//        std::cout << "Passed";
//    else
//        std::cout << "Failed" << std::endl;
    /*
 * Write an if-else statement that outputs the word High if the value of the variable score
    is greater than 100 and Low if the value of score is at most 100. The variable score is of
    type int
 * */
//    int score = 0;
//    std::cout << "Enter score: ";
//    std::cin >> score;
//    if (score > 100)
//        std::cout << "High";
//    else
//        std::cout << "Low";
//

    /**
     *
     * Suppose savings and expenses are variables of type double that have been given values.
        Write an if-else statement that outputs the word Solvent,
        decreases the value of savings by the value of expenses,
        and sets the value of expenses to zero provided that
        savings is at least as large as expenses. If, however, savings is less than expenses, the
        if-else statement simply outputs the word Bankrupt and does not change the value of
        any variables.
     */

//    double savings;
//    double expenses;
//    std::cout << "Enter your savings: ";
//    std::cin >> savings;
//    std::cout << std::endl;
//    std::cout << "Enter your expenses: ";
//    std::cin >> expenses;
//    std::cout << std::endl;
//
//    if (savings >= expenses) {
//        //output the word solvent
//        std::cout << "Solvent\n";
//        //decrease the value of savings by the value of expenses
//        //savings = savings - expenses;
//        savings -= expenses;
//        //sets the value of expenses to 0
//        expenses = 0;
//        std::cout << "Your new savings is GHS" << savings << std::endl;
//    } else {
//        std::cout << "Bankrupt" << std::endl;
//    }

//    int score = 0;
//    const int COMPUTER_SCORE = 90;
//    std::cout << "Enter your score: ";
//    std::cin >> score;

    //if statement
    //syntax
    /*if(boolean expression){
     * statements to execute if boolean expression evaluates to true
     * }
     * */
//    if (score > COMPUTER_SCORE) {
//        std::cout << "\nCongratulations!!!" << std::endl;
//        std::cout << "You win!!!" << std::endl;
//    }

    //if there is only one statement in the if block, you can omit the parenthesis
//    if (score > COMPUTER_SCORE)
//        std::cout << "You win" << std::endl;
//    std::cout << "\nCongratulations!!!" << std::endl;//this statement is not part of the if block

    /*if else statement
     * if(boolean expression){
     *  if block statements - statements to be executed if boolean expression evaluates to true
     * }else{
     *  else block statements - statements to be executed if the boolean expression evaluates to false
     * }
     * */

//    if (score > COMPUTER_SCORE) {
//        std::cout << "Congratulations!!!" << std::endl;
//        std::cout << "You won!!!" << std::endl;
//    } else {
//        std::cout << "Try again later loser!!!" << std::endl;
//        std::cout << "You lost!!!" << std::endl;
//    }

//    if (score > COMPUTER_SCORE)
//        std::cout << "You won" << std::endl;
////    std::cout << "Congratulations" << std::endl; //don't do this
//    else
//        std::cout << "You lost" << std::endl;


//    if (score > COMPUTER_SCORE) {
//        std::cout << "Congratulations!!!\n";
//        std::cout << "You won" << std::endl;
//    } else if (score == COMPUTER_SCORE) {
//        std::cout << "Stalemate" << std::endl;
//        std::cout << "You drew with the computer" << std::endl;
//    } else if (score < COMPUTER_SCORE) {
//        std::cout << "Try again later loser!!!" << std::endl;
//        std::cout << "You lost!!!" << std::endl;
//    }

//    if (score > COMPUTER_SCORE) {
//        std::cout << "Congratulations!!!\n";
//        std::cout << "You won" << std::endl;
//    } else if (score == COMPUTER_SCORE) {
//        std::cout << "Stalemate" << std::endl;
//        std::cout << "You drew with the computer" << std::endl;
//    } else  {
//        std::cout << "Try again later loser!!!" << std::endl;
//        std::cout << "You lost!!!" << std::endl;
//    }


    std::cout << "\nEnd of program" << std::endl;
    return 0;
}

//8 - 9 / 3 * 2 = 2

/**
 * Boolean expressions are expressions that evaluate to either true or false
 *
 * examples of boolean expressions
 * 1 <= 2 - true
 * 6 != 6 - false
 * 6 == 10 - false
 * 6 >= 15 - false
 * (6 == 5) && (5 <= 10) - false
 * 6 == 9 || 9 < 15 - true
 *
 * operators that can produce boolean expressions
 *  <= - less than or equal to
 *  < - less than
 *  >= - greater than or equal to
 *  > - greater than
 *  && - logical and
 *  || - logical or
 *  == - equality
 *  ! - not
 *  != not equal to
 * */