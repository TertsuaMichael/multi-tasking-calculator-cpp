#include<iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

    using std::cout;
    using std::cin;
    using std::endl;

        int main() {
            cout << "==========================" << "\n";
            cout << " MULTI TASKING CALCULATOR "<<endl;
            cout << "==========================" << "\n";
            cout << endl;

        int field;
            cout <<"Select your Field:(1-10)"<<endl;
            cout << endl;
            cout << "1). Household & Utility Manager "   <<endl;
            cout << "2). Freelance & Salary Calculator"  <<endl;
            cout << "3). Health & Fitness Metrics"       <<endl;
            cout << "4). Academic Grading Calculator"    <<endl;
            cout << "5). Temperature Converter"          <<endl;
            cout << "6). Naira-FX Calculator"            <<endl;
            cout << "7). Body Mass Index Calculator"     <<endl;
            cout << "8). Tax Calculator (Demo)"   <<endl;
            cout << "9). Millions Yanga Shuffle Draw"    <<endl;
            cout << "10) Exit"                           <<endl;
            cout << endl;
            cin >> field;
            cout << endl;

        while(field <1|| field >10)
        {
            cout << "ERROR!!! Invalid Choice" << "\n";
            cout << endl;
            cout << "Re-enter Field:" << endl;
            cin >> field;
            
        }

switch (field){

  //CASE ONE(1)/////////////////////////////////////////////////////////////////////////////////////////////////////////////

case 1:{
            cout << "========================================" << "\n";
            cout << "You Selected Household & Utility Manager"<<endl;
            cout << "========================================" << "\n";
            int caseHousehold;
            cout << "1).Cooking Gas Refill (LPG) "<<endl;
            cout << "2).DisCo Prepaid Meter "<<endl;
            cout << endl;
            cout << "Enter Your Choice" << "\n";
            cin >> caseHousehold;
            cout << endl;
            

            while(caseHousehold<1|| caseHousehold >2)
        {
            cout << "ERROR!!! Invalid Choice" << "\n";
            cout << endl;
            cout << "Re-enter Field:" << endl;
            cin >> caseHousehold;
        }

//Nested Switch.........................................
            switch (caseHousehold) 
            {
                case 1: 
                {
                    cout << "====================" << "\n";
                    cout << "LPG PRICE CALCULATOR" << "\n";
                    cout << "====================" << "\n";
                    double cylinder_weight;
                    double fixed_rate=1880;
                    double VAT = 0.09;              // 9% as a decimal
                    cout  <<endl;
                    cout << "Enter Your Cylinder Weight:" << "\n";
                            cin >> cylinder_weight;

                    double price = cylinder_weight * fixed_rate;
                    double total = price * (1 + VAT);   // add the VAT on top
                    cout << "LPG RATE: " << total << endl;
                    break;
                }  
    
                case 2: 
                {
                    cout << "========================" << "\n";
                    cout << " DISCO METER CALCULATOR" << "\n";
                    cout << "========================" << "\n";
                    int    band;
                    double units;
                    double electric_rate;
                    double VAT= 0.01*100;
                    cout  <<endl;
                    cout << "Enter Your Band:" << "\n";
                            cin >> band;
                    cout << "Enter The Units You Want to Purchase" << "\n";
                            cin >> units;

                    if (band == 1)      electric_rate = 40;
                    else if (band == 2) electric_rate = 30;
                    else if (band == 3) electric_rate = 20;
                    else if (band == 4) electric_rate = 10;
                    else 
                    {
                     cout << "Invalid band! Pick 1 to 4." << endl;
                     break;                      // leave early, no calculation
                    }
        
                    cout<<endl;
                    double unit_purchased =electric_rate * units;
                    cout<<"==============================="<<endl;
                    cout<<"  Units Purchased="            <<unit_purchased<<endl;
                    cout<<"==============================="<<endl;
                    break;
                }           
            }                
                    break;            
        }              

//CASE TWO(2)////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
case 2:{
                cout << "================================" << "\n";
                cout<<"   Freelance & Salary Calculator"   << "\n";
                cout << "================================" << "\n";
                cout << endl;

            int     caseSalary;
            double  monthly_minimumWage=48'000;
            double  weekly_minimumWage=12'000;
            double  hourly_minimumWage=300;

                cout << " Select Salary Case:" << endl;
                cout << "============================" << "\n";
                cout << " 1. Hours to Pay" << endl;
                cout << " 2. Pay to Minimum-Wage Hours" << endl;
                cout << " 3. Overtime Calculator"<< endl;
                cout<<endl;
                cout << " Enter choice (1-3): ";
                cin  >>caseSalary;
                cout<<endl;

            
            while(caseSalary<1 || caseSalary>3)
            {
                cout<<endl;
                cout<<"    Error: Salary Case must be between 1-3"<<endl;
                cout<<"    Re-enter choice (1-3): ";
                cin>>caseSalary;
                cout<<endl;
            }

         //so we will use a cin to send the input to the if/else
            cout<<endl;
         //if for the hours to pay////////////////////////////////////////////////////////////////////////if/else 1
            if(caseSalary==1)
            {
                cout << "========================" << "\n";
                cout << " Employers Hourly  Pay." << "\n";
                cout << "========================" << "\n";
                double employersHourlypay;
                double hoursworked;

                cin >> employersHourlypay;
                while(employersHourlypay<=300)
                {
                    cout<<endl;
                    cout<<"    Error:Employers Pay Beyond Minimum Wage."<<endl;
                    cout<<"    Re-enter Employers Hourly Pay: ";
                    cin>>employersHourlypay;
                    cout<<endl;
                }

                    cout << "========================" << "\n";
                    cout << " Hours Worked."           << "\n";
                    cout << "========================" << "\n";
                    cin >> hoursworked;
                while(hoursworked==0)
                {
                    cout<<endl;
                    cout<<"    Error:Invalid Hours Worked."<<endl;
                    cout<<"    Re-enter Hours Worked: ";
                    cin>>hoursworked;
                    cout<<endl;
                }

                double hoursTopay= employersHourlypay * hoursworked;//Rate for Heavy Duty Truck
                cout << "Total Earnings:" <<hoursTopay<< "\n";
            }

            else if(caseSalary==2)
            {
                    cout << "==============================" << "\n";    
                    cout << "Pay to Minimum Wage Comparison" << "\n";
                    cout << "==============================" << "\n";
                    cout << endl;
                    int wageComparison;
                    
            cout << " Select Pay to Minimum Wage Comparison:" << endl;
                    cout << "============================" << "\n";
                    cout << " 1. Hours" << endl;
                    cout << " 2. Weekly" << endl;
                    cout << " 3. Monthly"<< endl;
                
                    cout<<endl;
                    cout << " Enter choice (1-3): ";
                    cin  >>wageComparison;
                    cout<<endl;


                while(wageComparison<1 || wageComparison>3)
                    {
                        cout<<endl;
                        cout<<"    Error: Choice must be between 1-3"<<endl;
                        cout<<"    Re-enter choice (1-3): ";
                        cin>>wageComparison;
                        cout<<endl;
                    }

                    if(wageComparison==1)
                    {
                        double yourHOurlypay;
                        cout << "Compare Pay to Hourly Minimum Wage" << "\n";
                        cout << "==================================" << "\n";
                        cout << "NOTE: Hourly Minimum Wage=300"      << "\n";
                        cout << "==================================" << "\n";
                        cout << endl;
                        cout << "Enter Your Hourly Pay:"             << "\n";
                        cin >> yourHOurlypay;
         //Put a while conditon to catch any amount below the minimum wage.                
                            while(yourHOurlypay<300)
                            {
                                cout<<endl;
                                cout<<"    Error: Pay Below Hourly Minimum Wage."<<endl;
                                cout<<"    Re-enter Hourly Pay: ";
                                cin>>yourHOurlypay;
                                cout<<endl;
                            }

                        cout << "Hourly Pay to Hourly Minimum Wage:" <<(yourHOurlypay/hourly_minimumWage)<<"X"<< "\n";
                        
                    }
                    

                    else if(wageComparison==2)
                    {
                        double yourWeeklypay;
                        cout << "Compare Pay to Weekly Minimum Wage" << "\n";
                        cout << "==================================" << "\n";
                        cout << "NOTE: Weekly Minimum Wage=12'000"   << "\n";
                        cout << "==================================" << "\n";
                        cout << endl;
                        cout << "Enter Your Weekly Pay:"             << "\n";
                        cin >> yourWeeklypay;
         //Put a while conditon to catch any amount below the minimum wage.                
                            while(yourWeeklypay<12000)
                                
                            {
                                cout<<endl;
                                cout<<"    Error: Pay Below Weekly Minimum Wage."<<endl;
                                cout<<"    Re-enter Weekly Pay: ";
                                cin>>yourWeeklypay;
                                cout<<endl;
                            }


                        cout << "Weekly Pay to Weekly Minimum Wage:" <<(yourWeeklypay/weekly_minimumWage)<<"X"<< "\n";
                        
                    }

                    else if(wageComparison==3){
                        double yourMonthlypay;
                        cout << "Compare Pay to Monthly  Minimum Wage" << "\n";
                        cout << "=================================="   << "\n";
                        cout << "NOTE: Monthly Minimum Wage=48'000"    << "\n";
                        cout << "=================================="   << "\n";
                        cout << endl;
                        cout << "Enter Your Monthly Pay:"              << "\n";
                        cin >> yourMonthlypay;
         //Put a while conditon to catch any amount below the minimum wage.                
                        while(yourMonthlypay<48000){
                cout<<endl;
                cout<<"    Error: Pay Below Monthly Minimum Wage."<<endl;
                cout<<"    Re-enter Monthly Pay: ";
                cin>>yourMonthlypay;
                cout<<endl;}


                        cout << "Monthly Pay to Monthly Minimum Wage:" <<(yourMonthlypay/monthly_minimumWage)<<"X"<< "\n";
                        }}

                    else if(caseSalary==3)
                    {
                        cout << "==============================" << "\n";    
                        cout << "    Overtime Calculator"        << "\n";
                        cout << "==============================" << "\n";
                        double hoursWorkedovertime;
                        cout << endl;
                        cout << "Enter Hours Worked Overtime:"   << "\n";
                        cin >> hoursWorkedovertime;
                        cout << "==============================="<< "\n";
                        cout << "Your Overtime Pay:" <<(hoursWorkedovertime*hourly_minimumWage*1.5)<< "\n";
                        
                    }
                
                break;
        }
//CASE THREE(3)///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

case 3:{
                cout << "============================" << "\n";
                cout << " Health & Fitness Metrics" << "\n";
                cout << "============================" << "\n";
                cout << " 1. Steps to Calories Burned" << endl;
                cout << " 2. Calories Eaten to Steps Needed" << endl;
                cout << endl;
                cout << "Enter choice (1-2): ";

            int fitnessMetrics;
                cin >> fitnessMetrics;

                while (fitnessMetrics < 1 || fitnessMetrics > 2)
                {
                    cout << "    Error: Choice must be 1 or 2" << endl;
                    cout << "    Re-enter choice (1-2): ";
                    cin >> fitnessMetrics;
                }

                // a rough estimate: calories burned per step, per kg of body weight
                 const double caloriesPerStepPerKg = 0.0005;

            if (fitnessMetrics == 1)
            {
                double stepsTaken;
                double weightKg;

                cout << "Enter Steps Taken: ";
                cin >> stepsTaken;
                cout << "Enter Your Weight (kg): ";
                cin >> weightKg;

                double caloriesBurned = stepsTaken * weightKg * caloriesPerStepPerKg;
                cout << "Calories Burned (approx): " << caloriesBurned << endl;
            }
            else
            {
                double caloriesEaten;
                double weightKg;

                cout << "Enter Calories You Ate: ";
                cin >> caloriesEaten;
                cout << "Enter Your Weight (kg): ";
                cin >> weightKg;

                while (weightKg <= 0)
                {
                    cout << "    Error: Weight must be above 0" << endl;
                    cout << "    Re-enter Your Weight (kg): ";
                    cin >> weightKg;
                }

                double stepsNeeded = caloriesEaten / (weightKg * caloriesPerStepPerKg);
                cout << "Steps Needed to Burn It (approx): " << stepsNeeded << endl;
            }          
            break;
            
        }

case 4:{
                cout <<"Academic Grading Calculator" << "\n";
                cout <<"===============================" << "\n";
                int grade;
                cout << "Enter Total Marks:" << "\n";
                cout << "=================="  << "\n";
                cin >> grade;

                while(grade < 0 || grade > 100)
                {
                    cout << "    Error: Grade Must be between 0-100" << endl;
                    cout << "    Re-enter Grade(0-100): ";
                    cin >> grade;
                }

                if(grade >=70 && grade <=100)
                {
                    cout << "'A'"             << "\n";
                    cout <<"Grade: Excellent" << "\n";
                    cout <<"Grade Point: 5"   << "\n";
                }

                 else if(grade >=60 && grade <=69)
                {
                    cout << "'B'"             << "\n";
                    cout <<"Grade: Very Good" << "\n";
                    cout <<"Grade Point: 4"   << "\n";
                }

                 else if(grade >=50 && grade <=59)
                {
                    cout << "'C'"             << "\n";
                    cout <<"Grade: Good" << "\n";
                    cout <<"Grade Point: 3"   << "\n";
                }

                 else if(grade >=45 && grade <=49)
                {
                    cout << "'D'"             << "\n";
                    cout <<"Grade: Fair"      << "\n";
                    cout <<"Grade Point: 2"   << "\n";
                }

                 else if(grade >=40 && grade <=44)
                {
                    cout << "'E'"             << "\n";
                    cout <<"Grade: Poor"      << "\n";
                    cout <<"Grade Point: 1"   << "\n";
                }

                else if (grade>=0 && grade <=39) 
                {
                    cout << "'F'"             << "\n";
                    cout << "Grade: Fail"     << "\n";
                    cout << "Grade Point: 0"  << "\n";
                }

                 
                break;
                break;
        }

case 5:{
                cout<<"Temperature Converter";
                cout<<"=================================="<<endl;
                cout <<" MICHAEL'S TEMPERATURE CONVERTER" <<endl;
                cout<<"=================================="<<endl;
                cout <<endl;

                //lets call name of variable as temp_choice, short for temperature choice
            short temp_choice;

                cout <<"1) FARHENHEIT TO CELCIUS"<<endl;
                cout <<"2) CELCIUS TO FARHENHEIT"<<endl;

                cout <<endl;

                cout <<"ENTER YOUR CONVERSION CHOICE (1-2):";

                cin>>temp_choice;
                cout <<endl;

                while(temp_choice<1 || temp_choice>2)
                {
                    cout<<"ERROR!!! Invalid Choice "<<endl;
                    cout<<endl;

                    cout<<  "Re-enter Choice (1-2) :";
                    cin>> temp_choice;
                }



                //include a switch here to perfectly execute between the farhenheit and the celcius

                switch (temp_choice) 
                {

                 //make case one for farhenheit to celcius//
                    case 1:
                    {
                        cout<<" --------------------------------"<<endl;
                        cout << "      FARHENHEIT TO CELCIUS"<<endl;
                        cout<<" --------------------------------"<<endl;
                        double farhenheit;
                        cout <<endl;
                        cout <<"ENTER TEMPERATURE IN FARHENHEIT:";
                        cin >>farhenheit;
                        cout <<endl;

                        cout<<" ==============================="<<endl;
                        double celciuscalculated=(farhenheit -32) / 1.8;
                        cout<<"     CELCIUS:       "<<ceil(celciuscalculated)<<"C"<<endl;
                        cout<<" ==============================="<<endl;
                        break;
                    }

                 //make case two for celcius to farhenheit//


                    case 2:
                    {
                        cout<<" --------------------------------"<<endl;
                        cout << "     CELCIUS TO FARHENHEIT "<<endl;
                        cout<<" --------------------------------"<<endl;
                        double celcius;
                        cout <<endl;
                        cout <<"ENTER TEMPERATURE IN CELCIUS:";
                        cin >>celcius;
                        cout <<endl;

                        cout<<" ==============================="<<endl;
                        double farhenheitcalculated=(celcius * 1.8) + 32;
                        cout<<"   FARHENHEIT:   "<<ceil(farhenheitcalculated)<<"F"<<endl;
                        cout<<" ==============================="<<endl;
                        break;
                    }
                }
                        
                        break;
        }

case 6:{
                cout<<"Naira-FX Calculator";
                cout << "You picked Naira-FX Calculator"<<endl;
                cout<<"===================================="<<endl;
                cout<<"------------------------------------"<<endl;
                cout<< endl;
                short currency;
                cout<<"  (0. US Dollar (USD)             "<<endl;
                cout<<"  (1.Euro (EUR)                   "<<endl;
                cout<<"  (2.British Pound (GBP)          "<<endl;
                cout<<"  (3.Canadian Dollar (CAD)        "<<endl;
                cout<<"  (4.UAE Dirham (AED)             "<<endl;
                cout<<"  (5.Chinese Yuan (CNY)           "<<endl;
                cout<<"  (6.Ghanian Cedi (GHS)           "<<endl;
                cout<<"  (7.Japanese Yen (JPY)           "<<endl;
                cout<<"  (8.South African Rand (ZAR)     "<<endl;
                cout<<"  (9.CFA Franc (XOF)              "<<endl;
                cout<<"  (10.Korean Won (KOW)            "<<endl;
                cout << endl;
                cout<<"===================================="<<endl;
                cout<<"===================================="<<endl;


                cout<<"BASE CURRENCY: NIGERIAN NAIRA(NGN)"<<endl;
                cout<<endl;
                cout<<"ENTER CURRENCY CHOICE (0-10): ";
                //so we will use a cin to send the input to the if/else
                cin >>currency;
                cout <<endl;

                //put a while to catch any invalid numbers..........//

                while(currency<0 || currency>10)
                	
                {
                    cout <<"ERROR!!! Invalid Currency Choice "<<endl;
                    cout <<endl;

                    cout <<  "Re-enter Choice (0-10) :";
                    cin >> currency;
                }
                    cout <<endl;

                 // double naira holds the Naira value entered by the user

            double naira;
                cout<<" --------------------------------"<<endl;
                cout <<"   ENTER NGN:";
                cin >>naira;
                cout<<" --------------------------------"<<endl;
                cout <<endl;
                cout<<"================================="<<endl;

                if (currency == 0) 
                	
                {
                    cout << "US Dollar (USD): " <<     naira / 1394.00 << endl;
                }

                else if (currency == 1) 
                {
                    cout << "Euro (EUR): " <<          naira / 1577.00 << endl;
                }

                else if (currency == 2) 
                {
                    cout << "British Pound (GBP): "<<  naira / 1836.00 << endl;
                }

                else if (currency == 3)
                {
                    cout << "Canadian Dollar (CAD):"<<  naira / 977.00 << endl;
                }

                else if (currency == 4) 
                {
                    cout << "UAE Dirham (AED): " <<     naira / 366.00 << endl;
                }

                else if (currency == 5) 
                {
                    cout << "Chinese Yuan (CNY): " <<   naira / 200.00 << endl;
                }

                else if (currency == 6) 
                {
                    cout << "Ghanian Cedi (GHS): " <<   naira / 121.00 << endl;
                }

                else if (currency == 7) 
                {
                    cout << "Japanese Yen (JPY): " <<     naira / 9.10 << endl;
                }

                else if (currency == 8) 
                {
                    cout << "South African Rand (ZAR): "<<naira / 76.00 << endl;
                }

                else if (currency == 9) 
                {
                    cout << "CFA Franc (XOF): "<<          naira / 2.40 << endl;
                }

                else if (currency == 10)
                {
                    cout << "Korean Won (KOW):" << naira /1.01 <<endl;
                }
                cout<<"=========================================="<<endl;

                    
                break;
        }

case 7:{
                cout<<"Body Mass Index Calculator";
                cout << "You picked BMI Calculator"<<endl;
            double height;
            double weight;


                cout<<" ==============================="<<endl;
                cout<<"   MICHAELS   BMI   CALCULATOR"  <<endl;
                cout<<" ==============================="<<endl;

                //ENTER WEIGHT IN KG...............
                cout<<"   Enter Weight(in Kg):";
                cin>>weight;
                cout<<endl;

                //put a condition to catch invalid input of weight
                while (weight<=0)
                {
                    cout<<"   Re-Enter a Valid Weight(in Kg):";
                    cin>>weight;
                }
                    cout<<endl;


                    //ENTER HEIGHT IN METERES
                    cout<<"   Enter Height(in metres):";
                    cin>>height;
                    cout<<endl;

                    //put a condition to catch invalid input of height
                while (height<=0)
                {
                    cout<<"   Re-Enter a Valid Height(in Metres):";
                    cin>>height;
                }


                double bmi=weight/pow(height,2);
                cout<<"=========================================="<<endl;
                cout<<"   Body Mass Index(BMI):    "<<bmi<<endl;
                cout<<"=========================================="<<endl;


                if (bmi<18.5)
                {
                    cout<<endl;
                    cout<<"  Remark : Underweight"<<endl;
                    cout<<"  Advice : Eat more protein."<<endl;
                }

                else if (bmi>=18.5 && bmi <=24.9)
                {
                    cout<<endl;
                    cout<<"  Remark : Normal Weight"<<endl;
                    cout<<"  Advice : Nice Physique, Keep it up"<<endl;
                }

                else if (bmi>=25.0 && bmi <=29.9)
                {
                    cout<<endl;
                    cout<<"  Remark : Overweight"<<endl;
                    cout<<"  Advice : Eat healthier, move more."<<endl;
                }

                else if (bmi>=30.0)
                {
                    cout<<endl;
                    cout<<"  Remark : Obese"<<endl;
                    cout<<"  Advice : Small changes help."<<endl;
                }
                
                
                break;
        }


case 8:{
                cout<<"   Tax Calculator (Demo)   "<<endl;
                cout << "You picked Tax Calculator";
                cout <<endl;
            double gross_earnings;

                cout<<" ==============================="<<endl;
                cout<<"  MICHAELS   TAX   CALCULATOR"  <<endl;
                cout<<" ==============================="<<endl;
                cout<<"  Enter Earnings(in USD):";
                cin>>gross_earnings;
                cout<<endl;

                double income_tax=         .15 * gross_earnings;
                cout<<"Income tax:         $"<<income_tax<<endl;

                double health_insurance=   .05 * gross_earnings;
                cout<<"Health insurance:   $"<<health_insurance<<endl;

                double pension =           .06 * gross_earnings;
                cout<<"Pension:            $"<<pension<<endl;

                double insurance =         .05 * gross_earnings;
                cout<<"Insurance:          $"<<insurance<<endl;

                double municipal_tax =     .02 * gross_earnings;
                cout<<"Municipal tax:      $"<<municipal_tax<<endl;


                // We would conclude it with calculating the total//

                cout<<endl;
                double net_earning =gross_earnings-(income_tax+health_insurance+pension+insurance+municipal_tax);
                cout<<"==============================="<<endl;
                cout<<"  Net Earnings= $"<<net_earning<<endl;
                cout<<"==============================="<<endl;
                            break;}

case 9:{
                cout<<"Millions Yanga Shuffle Draw"<<endl;
            int guess;
            int special_number=6421;

                srand(time(0));
                cout<<"========================================="<<endl;
                cout<<"   NAIJA END OF THE YEAR RAFFLE DRAW   "<<endl;
                cout<<"=========================================="<<endl;
                cout<<endl;
                cout<<"Guess a'SPECIAL'number between 1 and 10000!"<<endl;
                cout<<endl;
                cout<<"GET IT RIGHT AND WALK AWAY WITH N1,000,000!"<<endl;


                cout<<"-------------------------------------------"<<endl;
                cout<<"ENTER GUESS::";cin >>guess;
                cout<<"-------------------------------------------"<<endl;
                cout<<endl;

                //lets put a loop to catch invalid input, numbers 1< || >10k

                while(guess<1 || guess>10000)
                {
                    cout<<"!! INVALID INPUT !!"<<endl;
                    cout<<endl;
                    cout<<"-------------------------------------------"<<endl;
                    cout<<"RE-ENTER GUESS:";
                    cin>>guess;
                    cout<<"-------------------------------------------"<<endl;
                    cout<<endl;
                }


                if (guess==6421)
                {
                    cout<<"          !!! Congrats, You Won !!!"<<endl;
                    cout<<"--------------------------------------------"<<endl;
                    cout<<"==============ONE MILLION NAIRA============="<<endl;
                    cout<<"--------------------------------------------"<<endl;
                    cout<<"Contact Admin: To Verify your winning ticket"<<endl;
                }

                else if (guess>=1 && guess<=1250)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"         You are not Far off          "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=1251 && guess<=2500)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"     So close! Right on the edge      "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=2501 && guess<=3750)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"  Razor-thin miss! You're right there "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=3751 && guess<=5000)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"        Within striking distance      "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=5001 && guess<=6250)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"            Very close call           "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=6251 && guess<=7500)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"           Barely missed it           "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=7501 && guess<=8750)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"       Almost hit the jackpot         "<<endl;
                    cout<<"======================================"<<endl;
                }

                else if (guess>=8751&&  guess<=10000)
                {
                    cout<<"===============Try Again=============="<<endl;
                    cout<<"--------------------------------------"<<endl;
                    cout<<"        You clipped the edge          "<<endl;
                    cout<<"======================================"<<endl;
                }
                break;
                
        }


case 10:{
                cout<<"Exit";
                return 0;
                break;
                
        }

}

             
    return 0;
}              // closes main