#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>


using namespace std;


int main () {

int menu;
string  holder; string date; string compensation; string send_it; string time ; string commercial_uses; string fair_terms; 


cout<< "\\documentclass[12pt]{article}" <<endl;
cout<< "\\begin{document}" <<endl;


cout<<"\% Copyright holder's name: " <<endl;
getline (cin, holder);
cout<< "\\noindent Copyright holder: " <<holder <<"\\\\" <<endl;

cout<<"\% Date of publication:" <<endl;
getline (cin, date);
cout<< "Date: " <<date <<"\\\\" <<endl;

cout<<"\% Retribution required for permission (money, services):" <<endl;
getline (cin, compensation);
cout<< "Economical Compensation: "  <<compensation  <<"\\\\" <<endl;

cout<<"\% where should they send the money(Paypal, BTC):" <<endl;
getline (cin, send_it);
cout<< "Send it to: " <<send_it <<"\\\\" <<endl;

cout<<"\% Time o permission?: " <<endl;
getline (cin, time);
cout<< "Time of permission for commercial uses: " <<time <<"\\\\" <<endl;

cout<<"\% Which commercial uses must pay retribution? :" <<endl;
getline (cin, commercial_uses);
cout<< "Commercial uses: " <<commercial_uses <<"\\newline" <<endl;
//cout<<"\\vspace{5mm}" <<endl;

cout<<"\% do you want to include something else that you consider fair?: " <<endl;
getline (cin, fair_terms);
cout<< "\\noindent Additional FAIR terms: " <<fair_terms <<"\\newline" <<"\\newline" <<endl; 



cout<< "This work is licensed under the Fair Commons Generic License v0." <<"\\\\"  <<endl;
cout<< "\\noindent General permissions are included on the following terms conditions:"  <<"\\newline" <<"\\newline"  <<endl;

cout <<"(0)DEFINITIONS:" <<"\\\\"  <<endl;
cout <<"– Licensor. The copyright holder of this work." <<"\\\\"  <<endl;
cout <<"– Licensee. Someone who uses this work for any purpose." <<"\\\\"  <<endl;
cout <<"– Extended fair uses. Any non-commercial use of this work." <<"\\\\" <<endl;
cout <<"\\noindent Commercial uses. Those included in the “Commercial Uses” clause."  <<"\\newline" <<"\\newline" <<endl;

cout <<"(1)PERMISSION FOR EXTENDED FAIR USES:" <<"\\\\" <<endl;
cout <<"–The licensor gives a “free of charge” permission to the licensee, for any “EXTENDED FAIR USE” of this work, including the right to use, the right to distribute, the right of public communication, the right to publish," <<endl;

cout<< "the right to create modified versions, and the right to distribute modified versions." <<"\\vspace{5mm}" <<endl;
cout<<"\\newline" <<endl;

cout <<"(2) PERMISSION FOR COMMERCIAL USES:" <<"\\\\" <<endl;
cout <<"However, if the licensee wants to make any commercial use of this work, including the rights enumerated in section 1, he must pay to the licensor the amount of money specified in the “ECONOMICAL COMPENSATION” clause." <<"\\\\" <<endl;

cout <<"The licensor must specify a period of authorized time for commercial uses of this work in the “PERIOD OF TIME” clause, otherwise the default is equal to indefinite permission." <<"\\\\" <<endl;

cout <<"The licensor must include a list of commercial uses in the “COMMERCIAL USES” clause. Only the listed commercial uses must pay the “ECONOMICAL COMPENSATION”." <<"\\vspace{5mm}" <<endl;
cout<<"\\newline" <<endl;

cout <<"(3)NO WARRANTY:" <<"\\\\" <<endl;
cout <<"This work is provided as it is without warranty of any kind, and the licensor of this work denies any liability for any kind of damages. However if the Licensor thinks that is fair, he may still include any  warranty in the ADDITIONAL FAIR TERMS clause." <<endl;
cout<<"\\newline" <<endl;

cout <<"(4) NO DISCRIMINATION:" <<"\\\\" <<endl;
cout <<"The Licensor of this work cannot discriminate the licensee in terms of ethnicity, gender, nationality, age, disabilities, or other types of discrimination included in the universal declaration of human rights." <<"\\\\" <<endl;


cout << "\\end{document}" <<endl;

}
